#pragma once

#include "PorticoDatatype.h" 
#include <string>


 
const long SERIAL_VERSION_UID = 28373772828273738;
	
  
BasicDatatype(std::string name, int size, Endianness endianness)
{
	this->name = name;
	this->size = size;
	this->endianness = endianness;
}

 
std::ostream& operator<<( std::ostream& os, const BasicDatatype& basicDataType )
{
	os << endiannessToString( endianness ); 
}


std::ostream& operator<<( const BasicDatatype& basicDataType, const BasicDatatype& otherBasicDataType )		
{
	return basicDataType.name == otherBasicDatatype.name && 
		   basicDatatype.size == otherBasicDatatype.size &&
		   basicDatatype.endianness == otherBasicDatatype.endianness;
}


public Endianness getEndianness()
{
	return this->endianness;
}

 
std::string getName()
{
	return this->name;
}

 
DatatypeClass getDatatypeClass()
{
	return DatatypeClass.BASIC;
}

 
shared_ptr<BasicDatatype> createUnlinkedClone()
{
	return std::make_shared<BasicDatatype>( this.name, this.size, this.endianness );
}

 
