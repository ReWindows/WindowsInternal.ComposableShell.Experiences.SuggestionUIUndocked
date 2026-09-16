#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 8 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class DataPackageInjectionDoDropAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXHH_K@Z
    void StartActivity(int, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_N@Z
    void Stop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~DataPackageInjectionDoDropAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DataPackageInjectionDoDropAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
