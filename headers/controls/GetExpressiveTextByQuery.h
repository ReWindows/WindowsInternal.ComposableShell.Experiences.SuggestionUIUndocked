#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class GetExpressiveTextByQuery {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetExpressiveTextByQuery@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4ExpressiveTextDataItemType@3456@I@Z
    void StartActivity(int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetExpressiveTextByQuery@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~GetExpressiveTextByQuery();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetExpressiveTextByQuery@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetExpressiveTextByQuery@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
