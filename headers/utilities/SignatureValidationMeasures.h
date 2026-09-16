#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 3 member(s).
class SignatureValidationMeasures {
public:
    class SignatureValidation_IsFileMicrosoftSigned;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinVerifyTrustResult_@SignatureValidationMeasures@@QEAAXAEBU_GUID@@AEBU_WINTRUST_DATA@@JK@Z
    void WinVerifyTrustResult_(_GUID const &, _WINTRUST_DATA const &, long, unsigned long);
};
