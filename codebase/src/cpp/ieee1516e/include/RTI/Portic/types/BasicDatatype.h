#pragma once

#include "RTI/Portico/types/PorticoDatatypeClass.h" 
#include "RTI/Portico/types/Endianness.h" 
#include <string>


class BasicDatatype : public DataType
{
	class Datatype;	
private:

	private std::string	name;			/// The name of this datatype
	private int			size;			/// The size of this datatype
	private Endianness	endianness;		/// The endianness of this datatype
	
public:

	/**
	 * Constructor for BasicType with specified name, size and endianness
	 * 
	 * @param name the name of this data type
	 * @param size the size of this data type in bits
	 * @param endianness the byte ordering of this data type
	 */
	BasicDatatype(const std::string& name, int size, Endianness endianness);

	/**
	 * Overload the ostream operator
	 * 
	 * @param os the name of this data type
	 * @param size the size of this data type in bits 
	 */
	std::ostream& operator<<( std::ostream& os, const BasicDatatype& basicDataType );

	/**
	 * Overload the equality operator. Check to see if two basicDatatypes are the same.
	 * 
	 * @param basicDataType A basic data type to compare
	 * @param otherBasicDataType A basic data type to compare to
	 */
	std::ostream& operator==( const BasicDatatype& basicDataType, const BasicDatatype& otherBasicDataType );

	/**
	 * Get the endianness of thei datatype.
	 * 
	 * @return otherBasicDataType A basic data type to compare to
	 */
	public Endianness getEndianness();


	//////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Datatype Interface ////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////
	
	/**
	* Returns the name of this datatype.
	*/
	std::string getName();

	/**
	* Returns the FOM datatype class of this datatype (e.g. Basic, Simple, Enumerated, Array,
	* Fixed Record or Variant).
	*/
	DatatypeClass getDatatypeClass();
 
};
