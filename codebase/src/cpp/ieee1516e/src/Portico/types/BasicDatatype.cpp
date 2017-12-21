#pragma once

#include <string> 
  

BasicDatatype::BasicDatatype(const std::string& name, int size, Endianness endianness)
{
	this->name = name;
	this->size = size;
	this->endianness = endianness;
}

 
std::ostream& BasicDatatype::operator<<( std::ostream& os, const BasicDatatype& basicDataType )
{
	os << endiannessToString( endianness ); 
}


std::ostream& BasicDatatype::operator==( const BasicDatatype& basicDataType, const BasicDatatype& otherBasicDataType )		
{
	return basicDataType.name == otherBasicDatatype.name && 
		   basicDatatype.size == otherBasicDatatype.size &&
		   basicDatatype.endianness == otherBasicDatatype.endianness;
}


Endianness BasicDatatype::getEndianness()
{
	return this->endianness;
}

 
std::string BasicDatatype::getName()
{
	return this->name;
}

 
DatatypeClass BasicDatatype::getDatatypeClass()
{
	return DatatypeClass.BASIC;
}
 
 
