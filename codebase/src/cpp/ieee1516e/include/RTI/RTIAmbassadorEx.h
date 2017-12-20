#pragma once

#include "RTI/Datatype.h"
#include "RTI/RTIAmbassador.h"

class ObjectModel;
class DataType;

namespace rti1516e
{

	class RTIAmbassadorEx : public RTIAmbassador {

		//----------------------------------------------------------
		//                   INSTANCE VARIABLES
		//----------------------------------------------------------
	private:


		//----------------------------------------------------------
		//                      CONSTRUCTORS
		//----------------------------------------------------------
	public:

		/*ObjectModel getFom();*/

		virtual Datatype getAttributeDatatpe(ObjectClassHandle whichClass,
		                                     AttributeHandle theHandle)
			throw(AttributeNotDefined,
				InvalidAttributeHandle,
				InvalidObjectClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0 ;
		

		virtual Datatype getParameterDatatype(InteractionClassHandle whichClass,
		                                      ParameterHandle theHandle)
			throw (InteractionParameterNotDefined,
				InvalidParameterHandle,
				InvalidInteractionClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0;

	};
}