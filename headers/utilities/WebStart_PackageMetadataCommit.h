#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedTracelogging {
class WebStart_PackageMetadataCommit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AV12345678@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA?AV12345678@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@QEAA@XZ
    ~WebStart_PackageMetadataCommit();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebStart_PackageMetadataCommit@PackageFeedTracelogging@implementation@PackageFeed@Components@Client@WindowsInternal@winrt@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace winrt::WindowsInternal::Client::Components::PackageFeed::implementation::PackageFeedTracelogging
