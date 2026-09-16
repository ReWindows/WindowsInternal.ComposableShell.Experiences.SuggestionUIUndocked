#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class NativeBridgeInitialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NativeBridgeInitialize@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_NPE$AAVString@Platform@@@Z
    void StartActivity(bool, ::Platform::String & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NativeBridgeInitialize@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~NativeBridgeInitialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NativeBridgeInitialize@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NativeBridgeInitialize@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
