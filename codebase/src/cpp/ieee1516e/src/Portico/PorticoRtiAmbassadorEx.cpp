#include "portico/PorticoRtiAmbassadorEx.h" 
#include "RTI/portico/types/BasicDatatype.h"


//ObjectModel PorticoRtiAmbassadorEx::getFom() 
//{
//	return ObjectModel();
//}

Datatype* PorticoRtiAmbassadorEx::getAttributeDatatype(const rti1516e::ObjectClassHandle& whichClass, 
	                                                  const rti1516e::AttributeHandle &theHandle) 
{
	return new BasicDatatype("basic", 4, Endianness::BIG);
}


Datatype*  PorticoRtiAmbassadorEx::getParameterDatatype(const rti1516e::InteractionClassHandle& whichClass,
	                                                    const rti1516e::ParameterHandle &theHandle) 
{
	return new BasicDatatype("basic", 4, Endianness::BIG);
}