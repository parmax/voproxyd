#pragma once

#include "deps/onvif/wsddapi.h"

void wsdd_event_Hello(struct soap *soap, unsigned int InstanceId, const char *SequenceId,
        unsigned int MessageNumber, const char *MessageID, const char *RelatesTo,
        const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy,
        const char *XAddrs, unsigned int MetadataVersion)
{ }

void wsdd_event_Bye(struct soap *soap, unsigned int InstanceId, const char *SequenceId,
        unsigned int MessageNumber, const char *MessageID, const char *RelatesTo,
        const char *EndpointReference, const char *Types, const char *Scopes, const char *MatchBy,
        const char *XAddrs, unsigned int *MetadataVersion)
{ }

soap_wsdd_mode wsdd_event_Probe(struct soap *soap, const char *MessageID, const char *ReplyTo,
        const char *Types, const char *Scopes, const char *MatchBy,
        struct wsdd__ProbeMatchesType *ProbeMatches)
{
    return SOAP_WSDD_ADHOC;
}

void wsdd_event_ProbeMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId,
        unsigned int MessageNumber, const char *MessageID, const char *RelatesTo,
        struct wsdd__ProbeMatchesType *ProbeMatches)
{ }

soap_wsdd_mode wsdd_event_Resolve(struct soap *soap, const char *MessageID, const char *ReplyTo,
        const char *EndpointReference, struct wsdd__ResolveMatchType *match)
{
    return SOAP_WSDD_ADHOC;
}

void wsdd_event_ResolveMatches(struct soap *soap, unsigned int InstanceId, const char *SequenceId,
        unsigned int MessageNumber, const char *MessageID, const char *RelatesTo,
        struct wsdd__ResolveMatchType *match)
{ }

