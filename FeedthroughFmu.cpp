#include "logger.h"
#include "fmi2Functions.h"

fmi2Real real_input{0.0};                   // vr 0
fmi2Real real_output{0.0};                  // vr 1

fmi2Integer integer_input{ 0 };             // vr 2
fmi2Integer integer_output{ 0 };            // vr 3

fmi2Boolean boolean_input{ fmi2False };     // vr 4
fmi2Boolean boolean_output{ fmi2False };    // vr 5

fmi2Real simTime{ 0.0 };

fmi2EventInfo eventInfo{ fmi2False,fmi2False,fmi2False,fmi2False,fmi2True,0.1 };


const char* fmi2GetTypesPlatform(void)
{
    log("Called fmi2GetTypesPlatform");

    return fmi2TypesPlatform;
}


const char* fmi2GetVersion(void)
{
    log("Called fmi2GetVersion");

    return fmi2Version;
}


fmi2Status  fmi2SetDebugLogging(fmi2Component c,
    fmi2Boolean loggingOn,
    size_t nCategories,
    const fmi2String categories[])
{
    log("Called fmi2SetDebugLogging");

    return fmi2Status::fmi2OK;
}

fmi2Component fmi2Instantiate(fmi2String instanceName,
    fmi2Type fmu,
    fmi2String fmuGUID,
    fmi2String fmuResourceLocation,
    const fmi2CallbackFunctions* functions,
    fmi2Boolean visible,
    fmi2Boolean loggingOn)
{
    log("Called fmi2Instantiate");

    return &real_input;
}

void fmi2FreeInstance(fmi2Component c)
{
    log("Called fmi2FreeInstance");

    return;
}

fmi2Status fmi2SetupExperiment(fmi2Component c,
    fmi2Boolean toleranceDefined,
    fmi2Real tolerance,
    fmi2Real startTime,
    fmi2Boolean stopTimeDefined,
    fmi2Real stopTime)
{
    log("Called fmi2SetupExperiment");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2EnterInitializationMode(fmi2Component c)
{
    log("Called fmi2EnterInitializationMode");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2ExitInitializationMode(fmi2Component c)
{
    log("Called fmi2ExitInitializationMode");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2Terminate(fmi2Component c)
{
    log("Called fmi2Terminate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2Reset(fmi2Component c)
{
    log("Called fmi2Reset");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Real value[])
{
    log("Called fmi2GetReal");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 0)
            value[i] = real_input;
        else if (vr[i] == 1)
            value[i] = real_output;
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Integer value[])
{
    log("Called fmi2GetInteger");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 2)
            value[i] = integer_input;
        else if (vr[i] == 3)
            value[i] = integer_output;
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Boolean value[])
{
    log("Called fmi2GetBoolean");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 4)
            value[i] = boolean_input;
        else if (vr[i] == 5)
            value[i] = boolean_output;
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2String value[])
{
    log("Called fmi2GetString");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Real value[])
{
    log("Called fmi2SetReal");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 0)
            real_input = value[i];
        else if (vr[i] == 1)
            real_output = value[i];
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Integer value[])
{
    log("Called fmi2SetInteger");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 2)
            integer_input = value[i];
        else if (vr[i] == 3)
            integer_output = value[i];
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Boolean value[])
{
    log("Called fmi2SetBoolean");

    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] == 4)
            boolean_input = value[i];
        else if (vr[i] == 5)
            boolean_output = value[i];
        else
            ;
    }

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2String value[])
{
    log("Called fmi2SetString");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetFMUstate(fmi2Component c, fmi2FMUstate* FMUstate)
{
    log("Called fmi2GetFMUstate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetFMUstate(fmi2Component c, fmi2FMUstate  FMUstate)
{
    log("Called fmi2SetFMUstate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2FreeFMUstate(fmi2Component c, fmi2FMUstate* FMUstate)
{
    log("Called fmi2FreeFMUstate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SerializedFMUstateSize(fmi2Component c, fmi2FMUstate  FMUstate, size_t* size)
{
    log("Called fmi2SerializedFMUstateSize");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SerializeFMUstate(fmi2Component c, fmi2FMUstate  FMUstate, fmi2Byte serializedState[], size_t size)
{
    log("Called fmi2SerializeFMUstate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2DeSerializeFMUstate(fmi2Component c, const fmi2Byte serializedState[], size_t size, fmi2FMUstate* FMUstate)
{
    log("Called fmi2DeSerializeFMUstate");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetDirectionalDerivative(fmi2Component c,
    const fmi2ValueReference vUnknown_ref[], size_t nUnknown,
    const fmi2ValueReference vKnown_ref[], size_t nKnown,
    const fmi2Real dvKnown[],
    fmi2Real dvUnknown[])
{
    log("Called fmi2GetDirectionalDerivative");

    return fmi2Status::fmi2OK;
}

/***************************************************
Model Exchange
****************************************************/
fmi2Status fmi2EnterEventMode(fmi2Component c)
{
    log("Called fmi2EnterEventMode");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2NewDiscreteStates(fmi2Component c, fmi2EventInfo* fmi2eventInfo)
{
    log("Called fmi2NewDiscreteStates");

    eventInfo.nextEventTime = simTime + 0.1;
    eventInfo.nextEventTimeDefined = fmi2True;

    fmi2eventInfo->newDiscreteStatesNeeded = fmi2False;
    fmi2eventInfo->nextEventTime = simTime + 0.1;
    fmi2eventInfo->nextEventTimeDefined = fmi2True;

    std::string temp = "nextEventTime:" + std::to_string(simTime + 0.1);
    log(temp.c_str());

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2EnterContinuousTimeMode(fmi2Component c)
{
    log("Called fmi2EnterContinuousTimeMode");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2CompletedIntegratorStep(fmi2Component c,
    fmi2Boolean   noSetFMUStatePriorToCurrentPoint,
    fmi2Boolean* enterEventMode,
    fmi2Boolean* terminateSimulation)
{
    log("Called fmi2CompletedIntegratorStep");

    real_output     = real_input;
    integer_output  = integer_input;
    boolean_output  = boolean_input;

    if (eventInfo.nextEventTimeDefined && simTime >= eventInfo.nextEventTime)
        *enterEventMode = fmi2True;

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetTime(fmi2Component c, fmi2Real time)
{
    log("Called fmi2SetTime");

    simTime = time;
    std::string temp = "simtime:" + std::to_string(simTime);
    log(temp.c_str());

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2SetContinuousStates(fmi2Component c, const fmi2Real x[], size_t nx)
{
    log("Called fmi2SetContinuousStates");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetDerivatives(fmi2Component c, fmi2Real derivatives[], size_t nx)
{
    log("Called fmi2GetDerivatives");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetEventIndicators(fmi2Component c, fmi2Real eventIndicators[], size_t ni)
{
    log("Called fmi2GetEventIndicators");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetContinuousStates(fmi2Component c, fmi2Real x[], size_t nx)
{
    log("Called fmi2GetContinuousStates");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetNominalsOfContinuousStates(fmi2Component c, fmi2Real x_nominal[], size_t nx)
{
    log("Called fmi2GetNominalsOfContinuousStates");

    return fmi2Status::fmi2OK;
}


/***************************************************
Co-Simulation
****************************************************/
fmi2Status fmi2SetRealInputDerivatives(fmi2Component c,
    const fmi2ValueReference vr[], size_t nvr,
    const fmi2Integer order[],
    const fmi2Real value[])
{
    log("Called fmi2SetRealInputDerivatives");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetRealOutputDerivatives(fmi2Component c,
    const fmi2ValueReference vr[], size_t nvr,
    const fmi2Integer order[],
    fmi2Real value[])
{
    log("Called fmi2GetRealOutputDerivatives");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2DoStep(fmi2Component c,
    fmi2Real      currentCommunicationPoint,
    fmi2Real      communicationStepSize,
    fmi2Boolean   noSetFMUStatePriorToCurrentPoint)
{
    log("Called fmi2DoStep");

    real_output = real_input;
    integer_output = integer_input;
    boolean_output = boolean_input;

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2CancelStep(fmi2Component c)
{
    log("Called fmi2CancelStep");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetStatus(fmi2Component c, const fmi2StatusKind s, fmi2Status* value)
{
    log("Called fmi2GetStatus");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetRealStatus(fmi2Component c, const fmi2StatusKind s, fmi2Real* value)
{
    log("Called fmi2GetRealStatus");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetIntegerStatus(fmi2Component c, const fmi2StatusKind s, fmi2Integer* value)
{
    log("Called fmi2GetIntegerStatus");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetBooleanStatus(fmi2Component c, const fmi2StatusKind s, fmi2Boolean* value)
{
    log("Called fmi2GetBooleanStatus");

    return fmi2Status::fmi2OK;
}

fmi2Status fmi2GetStringStatus(fmi2Component c, const fmi2StatusKind s, fmi2String* value)
{
    log("Called fmi2GetStringStatus");

    return fmi2Status::fmi2OK;
}
