#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class CheckClipboardSetting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CheckClipboardSetting@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W@Z
    void StartActivity(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckClipboardSetting@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~CheckClipboardSetting();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CheckClipboardSetting@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CheckClipboardSetting@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
