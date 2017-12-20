#pragma once

#include "types/datatypes/PorticoDatatypeClass.h" 
#include "types/datatypes/Endianness.h" 
#include <string>


class BasicDatatype : public DataType
{

private:
	//----------------------------------------------------------
	//                    STATIC VARIABLES
	//----------------------------------------------------------
	const long SERIAL_VERSION_UID;

	private std::string	name;
	private int			size;
	private Endianness	endianness;
	
public:

	/**
	 * Constructor for BasicType with specified name, size and endianness
	 * 
	 * @param name the name of this data type
	 * @param size the size of this data type in bits
	 * @param endianness the byte ordering of this data type
	 */
	BasicDatatype(std::string name, int size, Endianness endianness);

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
	std::ostream& operator<<( const BasicDatatype& basicDataType, const BasicDatatype& otherBasicDataType );

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

	/**
	* Creates a copy of this datatype with any dependent datatypes it references replaced by a
	* {@link DatatypePlaceholder}.
	* <p/>
	* This method is used by the model merger while it imports extension datatypes into a base
	* model. As dependent datatypes may not have been imported at the time this datatype is
	* imported into the base model, the placeholder is used as a temporary reference. After all
	* extension datatypes have been imported into the base model, all placeholder types will
	* be resolved to their actual representations.
	*
	* @return a copy of this datatype replaced with a {@link DatatypePlaceholder}
	*/
	shared_ptr<BasicDatatype> createUnlinkedClone();

};
