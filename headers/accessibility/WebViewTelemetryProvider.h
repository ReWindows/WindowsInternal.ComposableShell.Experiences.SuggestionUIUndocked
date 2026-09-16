#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 40 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class WebViewTelemetryProvider {
public:
    class LatestPackageDownload;
    class NavigationStarting;
    class NavigationTriggering;
    class TakedownPackagesDownloading;
    class WebPackageLoading;
    class WebResourceRequested;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DOMContentLoaded_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVUri@Foundation@Windows@@_K@Z
    void DOMContentLoaded_(::Windows::Foundation::Uri & *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadPackageFailed_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4WebContentPackageDownloadStatus@PackageFeed@Components@Client@5@W4PackageFeedCluster@2345@1_K@Z
    void DownloadPackageFailed_(int, int, int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LongRunningScriptDetected_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXVTimeSpan@Foundation@Windows@@_K@Z
    void LongRunningScriptDetected_(::Windows::Foundation::TimeSpan, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LongWebViewNavigationDetected_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W00_K@Z
    void LongWebViewNavigationDetected_(wchar_t const *, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationCompleted_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVUri@Foundation@Windows@@_NW4WebErrorStatus@Web@8@_K@Z
    void NavigationCompleted_(::Windows::Foundation::Uri & *, bool, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageFeedClusterSetIgnored_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4PackageFeedCluster@2345@PEB_W01_K@Z
    void PackageFeedClusterSetIgnored_(int, wchar_t const *, int, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageFeedClusterSet_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXW4PackageFeedCluster@2345@_K@Z
    void PackageFeedClusterSet_(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageTakenDown_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W_N100_K@Z
    void PackageTakenDown_(wchar_t const *, bool, bool, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakendownPackageVersionsDownloadFailure_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W_K@Z
    void TakendownPackageVersionsDownloadFailure_(wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakendownPackageVersionsDownloadNetworkFailure_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXHIH_K@Z
    void TakendownPackageVersionsDownloadNetworkFailure_(int, unsigned int, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebPackageHealthTrackingStatusChange_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W0_K@Z
    void WebPackageHealthTrackingStatusChange_(wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebUIContentLoading_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVUri@Foundation@Windows@@_K@Z
    void WebUIContentLoading_(::Windows::Foundation::Uri & *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewCriticalDataV2_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N110@Z
    void WebViewCriticalDataV2_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewCriticalError_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11II10@Z
    void WebViewCriticalError_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned int, unsigned int, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewErrorTracelogging_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11II10@Z
    void WebViewErrorTracelogging_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned int, unsigned int, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewError_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11II10@Z
    void WebViewError_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned int, unsigned int, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureDroppingPIIExceptIP_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W1N10@Z
    void WebViewMeasureDroppingPIIExceptIP_(uint64_t, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureDroppingPII_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W1N10@Z
    void WebViewMeasureDroppingPII_(uint64_t, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureHashingPII_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W1N10@Z
    void WebViewMeasureHashingPII_(uint64_t, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureMarkingPII_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W1N10@Z
    void WebViewMeasureMarkingPII_(uint64_t, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureV2_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N110@Z
    void WebViewMeasureV2_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewMeasureWarning_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N10@Z
    void WebViewMeasureWarning_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewTelemetryV2_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N110@Z
    void WebViewTelemetryV2_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewTelemetryWarning_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N10@Z
    void WebViewTelemetryWarning_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewTraceLoggingInfo_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N10@Z
    void WebViewTraceLoggingInfo_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewTraceLoggingLogAlwaysV2_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N110@Z
    void WebViewTraceLoggingLogAlwaysV2_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewTraceLoggingVerbose_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11N10@Z
    void WebViewTraceLoggingVerbose_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, double, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewWarningTracelogging_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11II10@Z
    void WebViewWarningTracelogging_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned int, unsigned int, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebViewWarning_@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_KPEB_W11II10@Z
    void WebViewWarning_(uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned int, unsigned int, wchar_t const *, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UriToString@WebViewTelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CAPE$AAVString@Platform@@PE$AAVUri@Foundation@Windows@@@Z
    static ::Platform::String & * UriToString(::Windows::Foundation::Uri & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
