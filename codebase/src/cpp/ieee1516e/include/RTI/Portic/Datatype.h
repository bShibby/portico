#pragma once
#include "RTI/Portico/types/DatatypeClass.h" 
#include <string>


class Datatype
{
public:
	Datatype();

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
