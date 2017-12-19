#pragma once

#include "common.h"
#include "jni/Runtime.h"
#include "jni/JavaRTI.h"
#include "types/datatypes/IDatatype.h"
#include "rtiamb/PorticoRtiAmbassador.h"

class ObjectModel;
class IDataType;

class PorticoRtiAmbassadorEx : public PorticoRtiAmbassador {

	//----------------------------------------------------------
	//                   INSTANCE VARIABLES
	//----------------------------------------------------------
private:


	//----------------------------------------------------------
	//                      CONSTRUCTORS
	//----------------------------------------------------------
public:

	/*ObjectModel getFom();*/

	IDatatype getAttributeDatatpe(ObjectClassHandle whichClass,
	                              AttributeHandle theHandle)
		throw(AttributeNotDefined,
			InvalidAttributeHandle,
			InvalidObjectClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);
		

	IDatatype getParameterDatatype(InteractionClassHandle whichClass,
	                               ParameterHandle theHandle)
		throw (InteractionParameterNotDefined,
			InvalidParameterHandle,
			InvalidInteractionClassHandle,
			FederateNotExecutionMember,
			NotConnected,
			RTIinternalError);

};
