﻿
// File generated by Wsutil Compiler version 1.0092 
#include <WebServices.h>
#include "opencover.profiler.xsd.h"
#include "opencover.profiler.wsdl.h"

typedef struct _opencover_profiler_wsdlLocalDefinitions 
{
    struct // messages
    {
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_ShouldTrackAssembly_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_ShouldTrackAssembly_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_OutputMessage;
    } messages; // end of messages
    struct // XML dictionary
    {
        struct // XML string list
        {
            WS_XML_STRING IProfilerCommunication_Started_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Started
            WS_XML_STRING IProfilerCommunication_Started_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            WS_XML_STRING IProfilerCommunication_ShouldTrackAssembly_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssembly
            WS_XML_STRING IProfilerCommunication_ShouldTrackAssembly_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssemblyResponse
            WS_XML_STRING IProfilerCommunication_Stopping_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Stopping
            WS_XML_STRING IProfilerCommunication_Stopping_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
        } xmlStrings; // end of XML string list
        WS_XML_DICTIONARY dict;  
    } dictionary;  // end of XML dictionary
} _opencover_profiler_wsdlLocalDefinitions;

const static _opencover_profiler_wsdlLocalDefinitions opencover_profiler_wsdlLocalDefinitions =
{
    { // messages
        {    // message description for IProfilerCommunication_Started_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Started
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Started, 
        },    // message description for IProfilerCommunication_Started_InputMessage
        {    // message description for IProfilerCommunication_Started_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartedResponse, 
        },    // message description for IProfilerCommunication_Started_OutputMessage
        {    // message description for IProfilerCommunication_ShouldTrackAssembly_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_ShouldTrackAssembly_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssembly
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.ShouldTrackAssembly, 
        },    // message description for IProfilerCommunication_ShouldTrackAssembly_InputMessage
        {    // message description for IProfilerCommunication_ShouldTrackAssembly_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_ShouldTrackAssembly_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssemblyResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.ShouldTrackAssemblyResponse, 
        },    // message description for IProfilerCommunication_ShouldTrackAssembly_OutputMessage
        {    // message description for IProfilerCommunication_Stopping_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stopping
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stopping, 
        },    // message description for IProfilerCommunication_Stopping_InputMessage
        {    // message description for IProfilerCommunication_Stopping_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StoppingResponse, 
        },    // message description for IProfilerCommunication_Stopping_OutputMessage
    }, // end of messages 
    {    // dictionary 
        { // xmlStrings
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Started",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 0),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StartedResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 1),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssembly",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 2),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssemblyResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 3),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Stopping",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 4),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StoppingResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 5),
        },  // end of xmlStrings
        
        {   // opencover_profiler_wsdldictionary
        // 76c0c982-370e-44b3-9a27-2fc90133db04 
        { 0x76c0c982, 0x370e, 0x44b3, { 0x9a, 0x27, 0x2f,0xc9, 0x01, 0x33, 0xdb, 0x04 } },
        (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings,
        6,
        TRUE,
        },
    },   //  end of dictionary
}; //  end of opencover_profiler_wsdlLocalDefinitions

const _opencover_profiler_wsdl opencover_profiler_wsdl =
{
    {// messages
        {    // message description for IProfilerCommunication_Started_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Started
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Started, 
        },    // message description for IProfilerCommunication_Started_InputMessage
        {    // message description for IProfilerCommunication_Started_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartedResponse, 
        },    // message description for IProfilerCommunication_Started_OutputMessage
        {    // message description for IProfilerCommunication_ShouldTrackAssembly_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_ShouldTrackAssembly_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssembly
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.ShouldTrackAssembly, 
        },    // message description for IProfilerCommunication_ShouldTrackAssembly_InputMessage
        {    // message description for IProfilerCommunication_ShouldTrackAssembly_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_ShouldTrackAssembly_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/ShouldTrackAssemblyResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.ShouldTrackAssemblyResponse, 
        },    // message description for IProfilerCommunication_ShouldTrackAssembly_OutputMessage
        {    // message description for IProfilerCommunication_Stopping_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stopping
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stopping, 
        },    // message description for IProfilerCommunication_Stopping_InputMessage
        {    // message description for IProfilerCommunication_Stopping_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StoppingResponse, 
        },    // message description for IProfilerCommunication_Stopping_OutputMessage
    }, // messages
}; // end of _opencover_profiler_wsdl
