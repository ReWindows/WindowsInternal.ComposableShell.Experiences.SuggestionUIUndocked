#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class TextFrameworkCandidateAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TextFrameworkCandidateAction@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_WI_K@Z
    void StartActivity(wchar_t const *, unsigned int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextFrameworkCandidateAction@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~TextFrameworkCandidateAction();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TextFrameworkCandidateAction@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TextFrameworkCandidateAction@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
