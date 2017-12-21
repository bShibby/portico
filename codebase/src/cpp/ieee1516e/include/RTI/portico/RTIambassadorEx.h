#pragma once

#include "RTI/RTIambassador.h"
#include "RTI/portico/Datatype.h" 
#include "RTI/SpecificConfig.h"
 

namespace rti1516e
{

	class RTI_EXPORT RTIambassadorEx : public RTIambassador {
		
		//----------------------------------------------------------
		//                   INSTANCE VARIABLES
		//----------------------------------------------------------
	private:


		//----------------------------------------------------------
		//                      CONSTRUCTORS
		//----------------------------------------------------------
	public:

		/*ObjectModel getFom();*/

		virtual Datatype* getAttributeDatatpe(const rti1516e::ObjectClassHandle &whichClass,
		                                     const rti1516e::AttributeHandle &theHandle)
			throw(AttributeNotDefined,
				InvalidAttributeHandle,
				InvalidObjectClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0 ;
		

		virtual Datatype* getParameterDatatype(const rti1516e::InteractionClassHandle &whichClass,
		                                      const rti1516e::ParameterHandle &theHandle)
			throw (InteractionParameterNotDefined,
				InvalidParameterHandle,
				InvalidInteractionClassHandle,
				FederateNotExecutionMember,
				NotConnected,
				RTIinternalError) = 0;

	};
}