#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 6 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class NativeBridgeInitializeAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlightingInfoAsyncResult@NativeBridgeInitializeAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXJ_K@Z
    void CreateFlightingInfoAsyncResult(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NativeBridgeInitializeAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NativeBridgeInitializeAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~NativeBridgeInitializeAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NativeBridgeInitializeAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NativeBridgeInitializeAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
