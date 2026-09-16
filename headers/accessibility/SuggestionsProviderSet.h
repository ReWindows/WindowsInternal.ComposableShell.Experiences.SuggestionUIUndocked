#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class SuggestionsProviderSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SuggestionsProviderSet@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVString@Platform@@_K@Z
    void StartActivity(::Platform::String & *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuggestionsProviderSet@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~SuggestionsProviderSet();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SuggestionsProviderSet@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SuggestionsProviderSet@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
