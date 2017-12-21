#pragma once

#include "RTI/portico/types/BasicDatatype.h"   


BasicDatatype::BasicDatatype(const std::string& name, int size, Endianness endianness)
{
	this->name = name;
	this->size = size;
	this->endianness = endianness;
}

 
std::string toString( )
{
	return "BASIC"; 
}


//bool BasicDatatype::operator==( const BasicDatatype& otherBasicDatatype )		
//{
//	return this->name == otherBasicDatatype.name && 
//		   this->size == otherBasicDatatype.size &&
//		   this->endianness == otherBasicDatatype.endianness;
//}


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
	return DatatypeClass::BASIC;
}
 
 
