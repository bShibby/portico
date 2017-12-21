#pragma once

#include "RTI/portico/types/Endianness.h" 
#include "RTI/portico/Datatype.h"
#include "RTI/portico/types/DatatypeClass.h" 
#include <string> 

class RTI_EXPORT BasicDatatype : public Datatype
{

private:
	 
	std::string	name;			/// The name of this datatype
	int			size;			/// The size of this datatype
	Endianness	endianness;		/// The endianness of this datatype
	
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
	 * Get the type of this datatype as a string.
	 * 
	 * @return The type of this datatype as a string
	 */
	std::string toString( );

	/**
	 * Overload the equality operator. Check to see if two basicDatatypes are the same.
	 * 
	 * @param basicDataType A basic data type to compare
	 * @param otherBasicDataType A basic data type to compare to
	 */
	//bool operator==( const BasicDatatype& otherBasicDataType );

	/**
	 * Get the endianness of thei datatype.
	 * 
	 * @return otherBasicDataType A basic data type to compare to
	 */
	Endianness getEndianness();


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
