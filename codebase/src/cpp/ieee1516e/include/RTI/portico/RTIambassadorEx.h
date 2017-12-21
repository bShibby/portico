#pragma once

#include "RTI/portico/types/Datatype.h"
#include "RTI/RTIambassador.h"

 

namespace rti1516e
{

	class RTIambassadorEx : public RTIambassador {
		
		//----------------------------------------------------------
		//                   INSTANCE VARIABLES
		//----------------------------------------------------------
	private:


		//----------------------------------------------------------
		//                      CONSTRUCTORS
		//----------------------------------------------------------
	public:

		/*ObjectModel getFom();*/

		virtual Datatype getAttributeDatatpe(const ObjectClassHandle &whichClass,
		                                     const AttributeHandle &theHandle)
			throw(AttributeNotDefined,
				InvalidAttributeHandle,
				InvalidObjectClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0 ;
		

		virtual Datatype getParameterDatatype(const InteractionClassHandle &whichClass,
		                                      const ParameterHandle &theHandle)
			throw (InteractionParameterNotDefined,
				InvalidParameterHandle,
				InvalidInteractionClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0;

	};
}