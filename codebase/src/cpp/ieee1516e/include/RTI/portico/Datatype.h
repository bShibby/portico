#pragma once
#include "RTI/portico/types/DatatypeClass.h" 
#include "RTI/SpecificConfig.h"
#include <string>


class RTI_EXPORT Datatype
{
public:
	Datatype(){}

	/**
	* Returns the name of this datatype.
	*/
	virtual std::string getName() = 0;

	/**
	* Returns the FOM datatype class of this datatype (e.g. Basic, Simple, Enumerated, Array,
	* Fixed Record or Variant).
	*/
	virtual DatatypeClass getDatatypeClass() = 0;
 

};
