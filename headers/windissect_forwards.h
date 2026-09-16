#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Concurrency { namespace details { class _Task_impl_base; } } 
namespace Microsoft { namespace WRL { class Details; } } 
namespace Platform { class Details; } 
class SignatureValidationMeasures; 
namespace Windows { namespace ApplicationModel { class Package; } } 
namespace Windows { namespace Storage { class ApplicationData; } } 
namespace Windows { namespace UI { namespace Xaml { class Application; } } } 
namespace Windows { namespace Web { namespace Http { class HttpMethod; } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { class SuggestionUIUndocked; } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace DataTransfer { class ClipboardHistory; } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace DataTransfer { class ClipboardSettings; } } } 
namespace WindowsUdk { namespace UI { namespace AutomationPeer { class AutomationPeerHelper; } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class TextInputCapture; } } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class TextInputInjector; } } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class TextInputListener; } } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class TextInputSession; } } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class TextServicesSettings; } } } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { namespace filesystem { class _Dir_enum_impl; } } 
namespace std { class locale; } 
class tson; 
class winrt; 
class ActivityData; class CoTaskMemFree; class Destroy; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FEEDDATA; class HINSTANCE__; class HSTRING__; class HttpClientNetworkProvider; class HttpNetworkClient; class IActivationFactory; class IAppxPackageReader; class IClassFactory; class IDWriteFont; class IInspectable; class IUnknown; class InputScopeUtils; class LeaveCriticalSection; class MemberInfo; class PackageFeedTelemetryLogging; class ReleaseSRWLockExclusive; class SignatureValidationMeasures; class SuggestionUITraceLogging; class ThreadAssertions; class TipReportingInfo; class TypeInfo; class WebViewTraceLogging; class _CONTEXT; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _GUID; class _GenerateTask_0; class _GenerateTask_1P; class _Grp_t; class _Mbstatet; class _Perform; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _Resize_and_overwrite; class _SetUnwrappedAsyncOp; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TlgReflectorTag_Param0IsProviderType; class _WINTRUST_DATA; class __WIL_RTL_FEATURE_USAGE_DATA; class __abi_FTMWeakRefData; class __abi_IUnknown; class __abi___classObjectEntry; class __abi_dtor_helper; class __s_GUID; class __std_fs_convert_result; class __std_fs_find_data; class __std_fs_stats; class __winRT; class _tip_FloatingSuggestionUIClipboardHistoryShowTest; class _tip_FloatingSuggestionUIEmojiPanelShowTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class _tlgWrapperPtrSize; class append; class insert; class iterator; class lambda_1; class lambda_2; class push_back; class reserve; class thunk; class tson; class type; class type_info; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class winrt; 
namespace Concurrency { class cancellation_token; class cancellation_token_registration; class cancellation_token_source; class invalid_operation; class progress_reporter; class scheduler_interface; class scheduler_ptr; class task; class task_canceled; class task_completion_event; class task_continuation_context; class task_options; } 
namespace Concurrency { namespace details { class _AsyncTaskGeneratorThunk; class _CancellationTokenRegistration; class _CancellationTokenState; class _ContextCallback; class _ContinuationTaskHandleBase; class _ExceptionHolder; class _GetStaticAmbientSchedulerRef; class _JoinAllTokens_Add; class _MakeTToUnitFunc; class _RunAllParam; class _SelectorTaskGenerator; class _TaskCreationCallstack; class _TaskProcHandle; class _Task_completion_event_impl; class _Task_impl; class _Task_impl_base; class _ThenImplOptions; class _TypeSelectorAsyncAction; class _TypeSelectorAsyncOperationOrTask; class _TypeSelectorAsyncOperationWithProgress; class _TypeSelectorNoAsync; class _WhenAllImpl; } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; } } 
namespace Platform { class Agile; class Array; class Box; class Details; class EventSource; class Exception; class Guid; class IBox; class Object; class String; class StringReference; class WeakReference; class WriteOnlyArray; } 
namespace Platform { namespace Collections { class Details; class InputIterator; class VectorIterator; class VectorViewIterator; } } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace Windows { namespace ApplicationModel { class Package; } } 
namespace Windows { namespace ApplicationModel { namespace DataTransfer { class Clipboard; class ClipboardContentOptions; class DataPackage; class HtmlFormatHelper; } } } 
namespace Windows { namespace ApplicationModel { namespace Resources { namespace Core { class ResourceContext; } } } } 
namespace Windows { namespace Data { namespace Json { class IJsonValue; class JsonObject; class JsonValue; } } } 
namespace Windows { namespace Data { namespace Text { class TextConversionGenerator; class TextReverseConversionGenerator; } } } 
namespace Windows { namespace Foundation { class AsyncActionCompletedHandler; class AsyncOperationCompletedHandler; class AsyncOperationProgressHandler; class AsyncOperationWithProgressCompletedHandler; class Collections; class EventHandler; class EventRegistrationToken; class IAsyncAction; class IAsyncOperation; class IAsyncOperationWithProgress; class PropertyValue; class Size; class TimeSpan; class TypedEventHandler; class Uri; } } 
namespace Windows { namespace Gaming { namespace UI { namespace GameBar { class IsInputRedirectedChanged; } } } } 
namespace Windows { namespace Globalization { namespace Language { class CurrentInputMethodLanguageTag; } } } 
namespace Windows { namespace Graphics { namespace Imaging { class SoftwareBitmap; } } } 
namespace Windows { namespace Networking { namespace Connectivity { class ConnectionProfile; class NetworkInformation; } } } 
namespace Windows { namespace Storage { class ApplicationData; class SystemDataPaths; } } 
namespace Windows { namespace Storage { namespace Streams { class DataReader; class RandomAccessStreamReference; } } } 
namespace Windows { namespace System { class DispatcherQueue; class DispatcherQueueHandler; class DispatcherQueueTimer; class Launcher; class LauncherOptions; class User; } } 
namespace Windows { namespace System { namespace Power { namespace PowerManager { class BatteryStatus; class EnergySaverStatus; class PowerSupplyStatus; class RemainingChargePercent; class RemainingDischargeTime; } } } } 
namespace Windows { namespace System { namespace Threading { class ThreadPoolTimer; class TimerElapsedHandler; } } } 
namespace Windows { namespace System { namespace UserProfile { namespace GlobalizationPreferences { class Languages; } } } } 
namespace Windows { namespace UI { class Color; } } 
namespace Windows { namespace UI { namespace Colors { class Transparent; } } } 
namespace Windows { namespace UI { namespace Core { class CoreWindow; } } } 
namespace Windows { namespace UI { namespace Text { class FontWeight; } } } 
namespace Windows { namespace UI { namespace Text { namespace FontWeights { class Normal; } } } } 
namespace Windows { namespace UI { namespace ViewManagement { class AccessibilitySettings; class UISettings; class UISettingsAnimationsEnabledChangedEventArgs; class UISettingsAutoHideScrollBarsChangedEventArgs; class UISettingsMessageDurationChangedEventArgs; } } } 
namespace Windows { namespace UI { namespace Xaml { class Application; class DataContextChangedEventArgs; class DataTemplate; class DependencyObject; class DependencyProperty; class FrameworkElement; class ResourceDictionary; class RoutedEventHandler; class SizeChangedEventHandler; class Thickness; class UIElement; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { class AutomationProperties; class AutomationProperty; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { namespace AutomationElementIdentifiers { class ControlledPeersProperty; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { namespace Peers { class AutomationPeer; class FrameworkElementAutomationPeer; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { class ContentPresenter; class ContextMenuOpeningEventHandler; class FontIcon; class Grid; class TextBlock; class TextBox; class TextChangedEventHandler; class TextCompositionChangedEventArgs; class TextCompositionEndedEventArgs; class TextCompositionStartedEventArgs; class WebView; class WebViewContentLoadingEventArgs; class WebViewDOMContentLoadedEventArgs; class WebViewLongRunningScriptDetectedEventArgs; class WebViewNavigationCompletedEventArgs; class WebViewNavigationStartingEventArgs; class WebViewWebResourceRequestedEventArgs; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Data { class PropertyChangedEventArgs; class PropertyChangedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Input { class FocusManager; class LosingFocusEventArgs; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Interop { class BindableVectorChangedEventHandler; class IBindableObservableVector; class NotifyCollectionChangedEventArgs; class TypeName; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Markup { class IComponentConnector; class IXamlMember; class XamlBindingHelper; class XmlnsDefinition; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { class FontFamily; class VisualTreeHelper; } } } } 
namespace Windows { namespace Web { namespace Http { class HttpMethod; class HttpProgress; class HttpRequestResult; } } } 
namespace WindowsInternal { namespace Client { namespace Components { namespace PackageFeed { class WebContentPackage; class WebContentPackageFeedDownloadResult; } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { class SuggestionUIUndocked; class TextInputUndocked; } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { class ICommonResourceLoader; class IInputProfileActivatedArgs; class IInputProfileDataSourceCommon; class IPlatformAdapter; class ITextFrameworkAdapter; class ITextInputSettingsManager; class ITextInputSettingsValueChangedEventArgs; class ITextInputUserManager; class ShellViewShowRequestInfo; } } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { namespace LayoutData { class IKeyboardCategoryItem; class IKeyboardCategorySet; } } } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { namespace TextInputAppResourceLoader { class CommonLoader; } } } } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace DataTransfer { class ClipboardHistory; class ClipboardHistoryItem; class ClipboardSettings; } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace OnScreenInput { class SelectionMoveRequestedEventArgs; class TextInputCandidate; class TextInputCandidateCollection; class TextInputCandidateWindowState; } } } 
namespace WindowsUdk { namespace Data { namespace Text { class DisplayAndReading; class TextSuggestionCandidate; } } } 
namespace WindowsUdk { namespace System { namespace Profile { class StagedFeature; } } } 
namespace WindowsUdk { namespace UI { namespace AutomationPeer { class AutomationPeerHelper; } } } 
namespace WindowsUdk { namespace UI { namespace Input { namespace Text { class InjectedInputKeyboardInfo; class IsVersion3OverrideActiveChangedEventArgs; class TextChangedEventArgs; class TextInputCapture; class TextInputCaptureLostEventArgs; class TextInputInjector; class TextInputKeyReceivedEventArgs; class TextInputListener; class TextInputSession; class TextInputSessionTargetInfo; class TextServicesSettings; } } } } 
namespace WindowsUdk { namespace UI { namespace Xaml { namespace Controls { class WebView; } } } } 
namespace XamlBindingInfo { class IXamlBindings; class XamlBindings; } 
namespace XamlTypeInfo { namespace InfoProvider { class XamlUserType; } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { class _Binder; class _Bt_state_t; class _Buf; class _Char_traits_eq; class _Exact_args_t; class _Facet_base; class _Func_base; class _Func_class; class _Func_impl_no_alloc; class _Hash_find_last_result; class _Iterator_base0; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Loop_vals_t; class _Node_base; class _Node_class; class _Node_if; class _Node_rep; class _Ph; class _Root_node; class _Sequence; class _Simple_types; class _String_const_iterator; class _String_constructor_concat_tag; class _String_iterator; class _String_val; class _System_error; class _Tgt_state_t; class _Tree_const_iterator; class _Tree_find_hint_result; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Unforced; class _Value_init_tag; class _Vb_const_iterator; class _Vb_iterator; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class _Wrap_alloc; class allocator; class bad_alloc; class bad_array_new_length; class bad_cast; class bad_optional_access; class bad_weak_ptr; class basic_ostream; class basic_regex; class basic_streambuf; class basic_string; class basic_string_view; class char_traits; class collate; class coroutine_handle; class ctype; class equal_to; class error_code; class error_condition; class exception; class exception_ptr; class fpos; class function; class integral_constant; class invalid_argument; class list; class locale; class logic_error; class match_results; class mutex; class nothrow_t; class nullptr_t; class once_flag; class optional; class pair; class piecewise_construct_t; class random_access_iterator_tag; class ratio; class regex_iterator; class regex_token_iterator; class regex_traits; class runtime_error; class shared_ptr; class sub_match; class system_error; class to_chars_result; class tuple; class vector; class weak_ptr; } 
namespace std { namespace chrono { class duration; class system_clock; class time_point; } } 
namespace std { namespace filesystem { class _Dir_enum_impl; class _File_status_and_error; class _Find_file_handle; class _Normal_conversion; class file_status; class filesystem_error; class path; } } 
namespace tip2 { class details; class test_data_control; class test_flag; class test_info; class test_requirement; class test_state; class vector_nothrow; } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class com_ptr_t; class err_exception_policy; class err_returncode_policy; class unique_any_t; } 
namespace wil { namespace details { class ActivityAwareAwaiter; class DestroyThreadPoolTimer; class IFailureCallback; class ResultStatus; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class shared_object; class unique_storage; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 
namespace wistd { class function; class integral_constant; } 
namespace wistd { namespace __function { class __base; } } 

