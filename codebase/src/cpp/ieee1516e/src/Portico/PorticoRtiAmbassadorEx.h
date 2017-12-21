#pragma once

#include <string> 
#include "rtiamb/PorticoRtiAmbassador.h"
#include "RTI/portico/RTIambassadorEx.h"


class PorticoRtiAmbassadorEx : public RTIambassadorEx, PORTICO1516E_NS::PorticoRtiAmbassador {
	
	//----------------------------------------------------------
	//                   INSTANCE VARIABLES
	//----------------------------------------------------------
private:


	//----------------------------------------------------------
	//                      CONSTRUCTORS
	//----------------------------------------------------------
public:

	/*ObjectModel getFom();*/

	Datatype* getAttributeDatatype(const rti1516e::ObjectClassHandle& whichClass,
	                              const rti1516e::AttributeHandle &theHandle)
		throw(AttributeNotDefined,
			InvalidAttributeHandle,
			InvalidObjectClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);
		

	Datatype* getParameterDatatype(const rti1516e::InteractionClassHandle& whichClass,
	                               const rti1516e::ParameterHandle &theHandle)
		throw (InteractionParameterNotDefined,
			InvalidParameterHandle,
			InvalidInteractionClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);

};
