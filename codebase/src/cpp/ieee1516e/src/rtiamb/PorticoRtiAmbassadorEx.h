#pragma once
#include "types/datatypes/PorticosDatatype.h" 
#include <string>



#pragma once

#include "types/datatypes/PorticoDatatype.h" 



class PorticoRTIAmbassadorEx : public RTIAmbassadorEx, PorticoRtiAmbassador {

	//----------------------------------------------------------
	//                   INSTANCE VARIABLES
	//----------------------------------------------------------
private:


	//----------------------------------------------------------
	//                      CONSTRUCTORS
	//----------------------------------------------------------
public:

	/*ObjectModel getFom();*/

	Datatype getAttributeDatatpe(ObjectClassHandle whichClass,
	                              AttributeHandle theHandle)
		throw(AttributeNotDefined,
			InvalidAttributeHandle,
			InvalidObjectClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);
		

	Datatype getParameterDatatype(InteractionClassHandle whichClass,
	                               ParameterHandle theHandle)
		throw (InteractionParameterNotDefined,
			InvalidParameterHandle,
			InvalidInteractionClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);

};
