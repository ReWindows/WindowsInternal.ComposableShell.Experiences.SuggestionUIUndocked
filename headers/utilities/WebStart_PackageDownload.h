#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 18 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures {
class WebStart_PackageDownload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXPEB_W@Z
    void StartActivity(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXH_N@Z
    void Stop(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AV12345678@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AV12345678@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@XZ
    ~WebStart_PackageDownload();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebStart_PackageDownload@PackageFeedMeasures@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedMeasures
