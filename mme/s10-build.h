#ifndef S10_BUILD_H

#define S10_BUILD_H


#include "context.h" // Assuming context.h is relevant for S10 as well


#ifdef __cplusplus

extern "C" {

#endif


// Hypothetical functions for S10 interface message building

ogs_pkbuf_t *s10_build_some_request(uint8_t type, session_t *sess);

ogs_pkbuf_t *s10_build_some_response(uint8_t type, bearer_t *bearer, uint8_t cause_value);

// ... additional message building function prototypes ...


#ifdef __cplusplus

}

#endif


#endif /* S10_BUILD_H */