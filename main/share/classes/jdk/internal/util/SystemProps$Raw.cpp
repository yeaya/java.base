#include <jdk/internal/util/SystemProps$Raw.h>

#include <java/util/HashMap.h>
#include <jdk/internal/util/SystemProps.h>
#include <jcpp.h>

#undef FIXED_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $SystemProps = ::jdk::internal::util::SystemProps;

namespace jdk {
	namespace internal {
		namespace util {

$FieldInfo _SystemProps$Raw_FieldInfo_[] = {
	{"_display_country_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _display_country_NDX)},
	{"_display_language_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _display_language_NDX)},
	{"_display_script_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _display_script_NDX)},
	{"_display_variant_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _display_variant_NDX)},
	{"_file_encoding_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _file_encoding_NDX)},
	{"_file_separator_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _file_separator_NDX)},
	{"_format_country_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _format_country_NDX)},
	{"_format_language_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _format_language_NDX)},
	{"_format_script_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _format_script_NDX)},
	{"_format_variant_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _format_variant_NDX)},
	{"_ftp_nonProxyHosts_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _ftp_nonProxyHosts_NDX)},
	{"_ftp_proxyHost_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _ftp_proxyHost_NDX)},
	{"_ftp_proxyPort_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _ftp_proxyPort_NDX)},
	{"_http_nonProxyHosts_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _http_nonProxyHosts_NDX)},
	{"_http_proxyHost_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _http_proxyHost_NDX)},
	{"_http_proxyPort_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _http_proxyPort_NDX)},
	{"_https_proxyHost_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _https_proxyHost_NDX)},
	{"_https_proxyPort_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _https_proxyPort_NDX)},
	{"_java_io_tmpdir_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _java_io_tmpdir_NDX)},
	{"_line_separator_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _line_separator_NDX)},
	{"_os_arch_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _os_arch_NDX)},
	{"_os_name_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _os_name_NDX)},
	{"_os_version_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _os_version_NDX)},
	{"_path_separator_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _path_separator_NDX)},
	{"_socksNonProxyHosts_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _socksNonProxyHosts_NDX)},
	{"_socksProxyHost_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _socksProxyHost_NDX)},
	{"_socksProxyPort_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _socksProxyPort_NDX)},
	{"_sun_arch_abi_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_arch_abi_NDX)},
	{"_sun_arch_data_model_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_arch_data_model_NDX)},
	{"_sun_cpu_endian_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_cpu_endian_NDX)},
	{"_sun_cpu_isalist_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_cpu_isalist_NDX)},
	{"_sun_io_unicode_encoding_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_io_unicode_encoding_NDX)},
	{"_sun_jnu_encoding_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_jnu_encoding_NDX)},
	{"_sun_os_patch_level_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_os_patch_level_NDX)},
	{"_sun_stderr_encoding_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_stderr_encoding_NDX)},
	{"_sun_stdout_encoding_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _sun_stdout_encoding_NDX)},
	{"_user_dir_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _user_dir_NDX)},
	{"_user_home_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _user_home_NDX)},
	{"_user_name_NDX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, _user_name_NDX)},
	{"FIXED_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemProps$Raw, FIXED_LENGTH)},
	{"platformProps", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SystemProps$Raw, platformProps)},
	{}
};

$MethodInfo _SystemProps$Raw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SystemProps$Raw::*)()>(&SystemProps$Raw::init$))},
	{"cmdProperties", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$HashMap*(SystemProps$Raw::*)()>(&SystemProps$Raw::cmdProperties))},
	{"platformProperties", "()[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)()>(&SystemProps$Raw::platformProperties))},
	{"propDefault", "(I)Ljava/lang/String;", nullptr, 0},
	{"vmProperties", "()[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)()>(&SystemProps$Raw::vmProperties))},
	{}
};

#define _METHOD_INDEX_platformProperties 2
#define _METHOD_INDEX_vmProperties 4

$InnerClassInfo _SystemProps$Raw_InnerClassesInfo_[] = {
	{"jdk.internal.util.SystemProps$Raw", "jdk.internal.util.SystemProps", "Raw", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SystemProps$Raw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.SystemProps$Raw",
	"java.lang.Object",
	nullptr,
	_SystemProps$Raw_FieldInfo_,
	_SystemProps$Raw_MethodInfo_,
	nullptr,
	nullptr,
	_SystemProps$Raw_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.SystemProps"
};

$Object* allocate$SystemProps$Raw($Class* clazz) {
	return $of($alloc(SystemProps$Raw));
}

void SystemProps$Raw::init$() {
	$set(this, platformProps, platformProperties());
}

$String* SystemProps$Raw::propDefault(int32_t index) {
	return $nc(this->platformProps)->get(index);
}

$HashMap* SystemProps$Raw::cmdProperties() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, vmProps, vmProperties());
	$var($HashMap, cmdProps, $new($HashMap, ($nc(vmProps)->length / 2) + SystemProps$Raw::FIXED_LENGTH));
	for (int32_t i = 0; i < $nc(vmProps)->length;) {
		$var($String, k, vmProps->get(i++));
		if (k != nullptr) {
			$var($String, v, vmProps->get(i++));
			cmdProps->put(k, v != nullptr ? v : ""_s);
		} else {
			break;
		}
	}
	return cmdProps;
}

$StringArray* SystemProps$Raw::vmProperties() {
	$init(SystemProps$Raw);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(SystemProps$Raw, vmProperties, $StringArray*);
	$assign($ret, $invokeNativeStatic(SystemProps$Raw, vmProperties));
	$finishNativeStatic();
	return $ret;
}

$StringArray* SystemProps$Raw::platformProperties() {
	$init(SystemProps$Raw);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(SystemProps$Raw, platformProperties, $StringArray*);
	$assign($ret, $invokeNativeStatic(SystemProps$Raw, platformProperties));
	$finishNativeStatic();
	return $ret;
}

SystemProps$Raw::SystemProps$Raw() {
}

$Class* SystemProps$Raw::load$($String* name, bool initialize) {
	$loadClass(SystemProps$Raw, name, initialize, &_SystemProps$Raw_ClassInfo_, allocate$SystemProps$Raw);
	return class$;
}

$Class* SystemProps$Raw::class$ = nullptr;

		} // util
	} // internal
} // jdk