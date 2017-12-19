#pragma once
#include "types/datatypes/IDataClass.h" 
#include <string>

class IDatatype
{
public:
	IDatatype();

	/**
	* Returns the name of this datatype.
	*/
	std::string getName();

	/**
	* Returns the FOM datatype class of this datatype (e.g. Basic, Simple, Enumerated, Array,
	* Fixed Record or Variant).
	*/
	DataHelper::DatatypeClass getDatatypeClass();

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
	IDatatype createUnlinkedClone();

};
