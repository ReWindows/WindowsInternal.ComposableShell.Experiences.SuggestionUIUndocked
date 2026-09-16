#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class GetExpressiveTextItems {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetExpressiveTextItems@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4ExpressiveTextDataItemType@3456@PEB_W@Z
    void StartActivity(int, wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetExpressiveTextItems@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~GetExpressiveTextItems();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetExpressiveTextItems@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetExpressiveTextItems@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
