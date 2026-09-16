#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 24 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation {
class WebContentPackageFeed {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestAvailableLocalPackageAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UWebContentPackage@PackageFeed@Components@Client@WindowsInternal@winrt@@@Foundation@Windows@7@UWebContentPackage@34567@@Z
    WindissectOpaque GetBestAvailableLocalPackageAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestAvailablePackageAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UWebContentPackage@PackageFeed@Components@Client@WindowsInternal@winrt@@@Foundation@Windows@7@XZ
    WindissectOpaque GetBestAvailablePackageAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInboxPackageAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UWebContentPackage@PackageFeed@Components@Client@WindowsInternal@winrt@@@Foundation@Windows@7@XZ
    WindissectOpaque GetInboxPackageAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkingStatus@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEBA?AW4WebContentPackageWorkingStatus@34567@AEBUWebContentPackage@34567@@Z
    int GetWorkingStatus(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHealthTrackingScenarioCompletedRecently@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEBA_NAEBUWebContentPackage@34567@AEBUhstring@7@@Z
    bool IsHealthTrackingScenarioCompletedRecently(WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordSignalAndUpdateWorkingStatusAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@W4WebContentPackageWorkingStatus@PackageFeed@Components@Client@WindowsInternal@winrt@@@Foundation@Windows@7@UWebContentPackage@34567@W4WebContentPackageHealthSignal@34567@@Z
    WindissectOpaque RecordSignalAndUpdateWorkingStatusAsync(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHealthTrackingScenarioStateAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@AEBUWebContentPackage@34567@AEBUhstring@7@W4WebContentPackageHealthTrackingScenarioState@34567@@Z
    WindissectOpaque SetHealthTrackingScenarioStateAsync(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkingStatusAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@UWebContentPackage@34567@W4WebContentPackageWorkingStatus@34567@@Z
    WindissectOpaque SetWorkingStatusAsync(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCleanupOldPackagesAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@7@H@Z
    WindissectOpaque TryCleanupOldPackagesAsync(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDownloadLatestPackageAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@UWebContentPackageFeedDownloadResult@PackageFeed@Components@Client@WindowsInternal@winrt@@@Foundation@Windows@7@XZ
    WindissectOpaque TryDownloadLatestPackageAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@UEAA@XZ
    virtual ~WebContentPackageFeed();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGetRequest@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEBA?AUHttpRequestMessage@Http@Web@Windows@7@AEBUhstring@7@00@Z
    WindissectOpaque CreateGetRequest(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageMetadata@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAAXXZ
    void EnsurePackageMetadata();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHealthTrackingScenarioStateFromPackageMetadataObject@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA?AUJsonObject@Json@Data@Windows@7@U89Data@Windows@7@@Z
    WindissectOpaque GetHealthTrackingScenarioStateFromPackageMetadataObject(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInboxPackageInternal@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA?AUWebContentPackage@34567@XZ
    WindissectOpaque GetInboxPackageInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOsVersion@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@CA?AUhstring@7@XZ
    static WindissectOpaque GetOsVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRequestResult@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@CA?AW4ActionForResponse@1234567@AEBUIHttpRequestResult@Http@Web@Windows@7@AEAVWebStart_PackageDownload@PackageFeedMeasures@234567@_N2PEB_WPEAW4WebContentPackageDownloadStatus@34567@@Z
    static int HandleRequestResult(WindissectOpaque const &, WindissectOpaque &, bool, bool, wchar_t const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNotExistingPackagesFromMetadataAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA?AUIAsyncAction@Foundation@Windows@7@_K@Z
    WindissectOpaque RemoveNotExistingPackagesFromMetadataAsync(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCommitPackageMetadataAsync@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@7@XZ
    WindissectOpaque TryCommitPackageMetadataAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetHighestLocalPackageVersion@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA_KXZ
    uint64_t TryGetHighestLocalPackageVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetInboxPackageVersion@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@AEAA_KXZ
    uint64_t TryGetInboxPackageVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParseVersionFromJson@WebContentPackageFeed@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@CA_KAEBUIHttpContent@Http@Web@Windows@7@AEAVWebStart_PackageDownload@PackageFeedMeasures@234567@@Z
    static uint64_t TryParseVersionFromJson(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation
