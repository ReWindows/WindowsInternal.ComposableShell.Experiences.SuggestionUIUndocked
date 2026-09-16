#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider {
class DataPackageProxySetBinaryToDataPackageAsStorageItemAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA?AV123456@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~DataPackageProxySetBinaryToDataPackageAsStorageItemAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DataPackageProxySetBinaryToDataPackageAsStorageItemAsync@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::SuggestionUITelemetryProvider
