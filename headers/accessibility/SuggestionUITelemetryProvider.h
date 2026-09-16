#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 14 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class SuggestionUITelemetryProvider {
public:
    class Authenticate;
    class CheckClipboardSetting;
    class ClearClipboardAsync;
    class DataPackageInjectionDoDropAsync;
    class DataPackageProxySetBinaryToDataPackageAsStorageItemAsync;
    class DeleteClipboardItem;
    class DownloadedFileDeleterDeleteAll;
    class GetAuthenticationAccounts;
    class GetClipboardItems;
    class GetClipboardItemsCount;
    class GetClipboardPreviewDataAsync;
    class GetExpressiveTextByQuery;
    class GetExpressiveTextItems;
    class HandleExpressiveTextSelection;
    class InjectCtrlVKeyAsync;
    class InputProfileActivated;
    class InsertTextToEditBuffer;
    class NativeBridgeInitialize;
    class NativeBridgeInitializeAsync;
    class OnLoaded;
    class PinClipboardItem;
    class SelectClipboardHistoryItem;
    class SetCategorySet;
    class SuggestionUIContainerConstructor;
    class SuggestionsProviderSet;
    class TargetAppInfoChanged;
    class TextFrameworkCandidateAction;
    class TextFrameworkCandidatesUpdated;
    class TextFrameworkFocusChanged;
    class TextSuggestionSelection;
    class ThumbnailGenerator;
    class TryHide;
    class TryShow;
    class UnpinClipboardItem;
    class UpdateDockedViewState;
    class UploadClipboardItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardHistoryChangeDetected_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_K@Z
    void ClipboardHistoryChangeDetected_(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardUpdateDetected_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_K@Z
    void ClipboardUpdateDetected_(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpressiveTextSearchDataSourceNotInitialized_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_K@Z
    void ExpressiveTextSearchDataSourceNotInitialized_(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimestampInMs@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SANXZ
    static double GetTimestampInMs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonUserClipboardHistoryApiFallback_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W_K@Z
    void NonUserClipboardHistoryApiFallback_(wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetryCommonArgsUpdateInstanceRetry_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXH_K@Z
    void TelemetryCommonArgsUpdateInstanceRetry_(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextConversionGeneratorNotCreated_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W0_K@Z
    void TextConversionGeneratorNotCreated_(wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextReverseConversionGeneratorNotCreated_@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W0_K@Z
    void TextReverseConversionGeneratorNotCreated_(wchar_t const *, wchar_t const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UploadDockedViewStateChangeEvent@SuggestionUITelemetryProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SAXW4TelemetryViewChangeEventFlag@2345@W4TelemetryViewChangeEventStatus@2345@PEB_W_K@Z
    static void UploadDockedViewStateChangeEvent(int, int, wchar_t const *, uint64_t);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
