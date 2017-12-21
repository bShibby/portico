#pragma once

#include <string> 
#include "rtiamb/porticoRtiAmbassador.h"

class PorticoRTIAmbassadorEx : public RTIambassadorEx, PorticoRtiAmbassador {
	
	//----------------------------------------------------------
	//                   INSTANCE VARIABLES
	//----------------------------------------------------------
private:


	//----------------------------------------------------------
	//                      CONSTRUCTORS
	//----------------------------------------------------------
public:

	/*ObjectModel getFom();*/

	Datatype getAttributeDatatpe(const ObjectClassHandle& whichClass,
	                              AttributeHandle theHandle)
		throw(AttributeNotDefined,
			InvalidAttributeHandle,
			InvalidObjectClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);
		

	Datatype getParameterDatatype(const InteractionClassHandle& whichClass,
	                               ParameterHandle theHandle)
		throw (InteractionParameterNotDefined,
			InvalidParameterHandle,
			InvalidInteractionClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);

};
