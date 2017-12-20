/*
 *   Copyright 2017 The Portico Project
 *
 *   This file is part of portico.
 *
 *   portico is free software; you can redistribute it and/or modify
 *   it under the terms of the Common Developer and Distribution License (CDDL) 
 *   as published by Sun Microsystems. For more information see the LICENSE file.
 *   
 *   Use of this software is strictly AT YOUR OWN RISK!!!
 *   If something bad happens you do not have permission to come crying to me.
 *   (that goes for your lawyer as well)
 *
 */
#include <string>
 

Endinanness(EndiannessType type)
{
	this->endianness = type;
}
	 

std::string endiannessToString()
{
	switch( this->endianness )
	{
	case LITTLE:
		return "Little";
	default:
	case BIG:
		return "Big";
	}
}


std::ostream& operator<<( std::ostream& os, const Endianness& endianness )
{
	os << endiannessToString( endianness ); 
}


bool operator==( const Endianness& endianness, const Endianness& otherEndianness )
{
	return endianness->endiannessToString() == otherEndianness->endiannessToString();
}


public static Endianness fromFomString( std::string fomString ) throws JConfigurationException
{
	// need to change to case insensitive laterz. 
	if( fomString == "little") )
		return LITTLE;
	else if( ffomString == "big" )
		return BIG;
	else
		//throw new JConfigurationException( "Unsupported Endianness found: " + fomString ); need to suss out the exceptions available
}
 

 