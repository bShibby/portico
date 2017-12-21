#pragma once

#include <string>
#include "BasicDatatypeImp.h"
  
BasicDatatypeImp::BasicDatatype(const std::string& name, int size, Endianness endianness)
{
	this->name = name;
	this->size = size;
	this->endianness = endianness;
}

 
std::ostream& BasicDatatypeImp::operator<<( std::ostream& os, const BasicDatatype& basicDataType )
{
	os << endiannessToString( endianness ); 
}


std::ostream& BasicDatatypeImp::operator==( const BasicDatatype& basicDataType, const BasicDatatype& otherBasicDataType )		
{
	return basicDataType.name == otherBasicDatatype.name && 
		   basicDatatype.size == otherBasicDatatype.size &&
		   basicDatatype.endianness == otherBasicDatatype.endianness;
}


public Endianness BasicDatatypeImp::getEndianness()
{
	return this->endianness;
}

 
std::string BasicDatatypeImp::getName()
{
	return this->name;
}

 
DatatypeClass BasicDatatypeImp::getDatatypeClass()
{
	return DatatypeClass.BASIC;
}
 
 
