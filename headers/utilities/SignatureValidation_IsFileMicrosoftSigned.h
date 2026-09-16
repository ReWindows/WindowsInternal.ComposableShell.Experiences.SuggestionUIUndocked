#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace SignatureValidationMeasures {
class SignatureValidation_IsFileMicrosoftSigned {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailureLog@SignatureValidation_IsFileMicrosoftSigned@SignatureValidationMeasures@@QEAAXPEBDJKPEB_W_N@Z
    void FailureLog(char const *, long, unsigned long, wchar_t const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SignatureValidation_IsFileMicrosoftSigned@SignatureValidationMeasures@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SignatureValidation_IsFileMicrosoftSigned@SignatureValidationMeasures@@QEAA@XZ
    ~SignatureValidation_IsFileMicrosoftSigned();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SignatureValidation_IsFileMicrosoftSigned@SignatureValidationMeasures@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SignatureValidation_IsFileMicrosoftSigned@SignatureValidationMeasures@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SignatureValidationMeasures
