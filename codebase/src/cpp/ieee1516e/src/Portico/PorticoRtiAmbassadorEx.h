#pragma once

#include <string> 


class RTIAmbassadorEx;
class PorticoRtiAmbassador;
class Datatype;

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
