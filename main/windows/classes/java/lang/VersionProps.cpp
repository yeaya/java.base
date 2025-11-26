#include <java/lang/VersionProps.h>

#include <java/lang/CharSequence.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef CLASSFILE_MAJOR_MINOR
#undef VENDOR
#undef VENDOR_URL
#undef VENDOR_URL_BUG
#undef VENDOR_URL_VM_BUG
#undef VENDOR_VERSION
#undef VERSION_BUILD
#undef VERSION_NUMBER
#undef VERSION_OPT
#undef VERSION_PRE
#undef VERSION_SPECIFICATION

using $IntegerArray = $Array<::java::lang::Integer>;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$FieldInfo _VersionProps_FieldInfo_[] = {
	{"launcher_name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, launcher_name)},
	{"java_version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, java_version)},
	{"java_version_date", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, java_version_date)},
	{"java_runtime_name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, java_runtime_name)},
	{"java_runtime_version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, java_runtime_version)},
	{"VERSION_NUMBER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VERSION_NUMBER)},
	{"VERSION_SPECIFICATION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VERSION_SPECIFICATION)},
	{"VERSION_BUILD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VERSION_BUILD)},
	{"VERSION_PRE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VERSION_PRE)},
	{"VERSION_OPT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VERSION_OPT)},
	{"isLTS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, isLTS)},
	{"CLASSFILE_MAJOR_MINOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, CLASSFILE_MAJOR_MINOR)},
	{"VENDOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VENDOR)},
	{"VENDOR_URL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionProps, VENDOR_URL)},
	{"VENDOR_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(VersionProps, VENDOR_VERSION)},
	{"VENDOR_URL_BUG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(VersionProps, VENDOR_URL_BUG)},
	{"VENDOR_URL_VM_BUG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(VersionProps, VENDOR_URL_VM_BUG)},
	{}
};

$MethodInfo _VersionProps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VersionProps::*)()>(&VersionProps::init$))},
	{"build", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Integer;>;", $STATIC, $method(static_cast<$Optional*(*)()>(&VersionProps::build))},
	{"init", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*)>(&VersionProps::init))},
	{"optional", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $STATIC, $method(static_cast<$Optional*(*)()>(&VersionProps::optional))},
	{"optionalOf", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Optional*(*)($String*)>(&VersionProps::optionalOf))},
	{"parseVersionNumber", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t)>(&VersionProps::parseVersionNumber))},
	{"parseVersionNumbers", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/Integer;>;", $STATIC, $method(static_cast<$List*(*)($String*)>(&VersionProps::parseVersionNumbers))},
	{"pre", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $STATIC, $method(static_cast<$Optional*(*)()>(&VersionProps::pre))},
	{"print", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&VersionProps::print))},
	{"print", "(ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,bool)>(&VersionProps::print))},
	{"println", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&VersionProps::println))},
	{"versionNumbers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Integer;>;", $STATIC, $method(static_cast<$List*(*)()>(&VersionProps::versionNumbers))},
	{}
};

$ClassInfo _VersionProps_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.VersionProps",
	"java.lang.Object",
	nullptr,
	_VersionProps_FieldInfo_,
	_VersionProps_MethodInfo_
};

$Object* allocate$VersionProps($Class* clazz) {
	return $of($alloc(VersionProps));
}

$String* VersionProps::launcher_name = nullptr;
$String* VersionProps::java_version = nullptr;
$String* VersionProps::java_version_date = nullptr;
$String* VersionProps::java_runtime_name = nullptr;
$String* VersionProps::java_runtime_version = nullptr;
$String* VersionProps::VERSION_NUMBER = nullptr;
$String* VersionProps::VERSION_SPECIFICATION = nullptr;
$String* VersionProps::VERSION_BUILD = nullptr;
$String* VersionProps::VERSION_PRE = nullptr;
$String* VersionProps::VERSION_OPT = nullptr;
bool VersionProps::isLTS = false;
$String* VersionProps::CLASSFILE_MAJOR_MINOR = nullptr;
$String* VersionProps::VENDOR = nullptr;
$String* VersionProps::VENDOR_URL = nullptr;
$String* VersionProps::VENDOR_VERSION = nullptr;
$String* VersionProps::VENDOR_URL_BUG = nullptr;
$String* VersionProps::VENDOR_URL_VM_BUG = nullptr;

void VersionProps::init$() {
}

void VersionProps::init($Map* props) {
	$init(VersionProps);
	$nc(props)->put("java.version"_s, VersionProps::java_version);
	props->put("java.version.date"_s, VersionProps::java_version_date);
	props->put("java.runtime.version"_s, VersionProps::java_runtime_version);
	props->put("java.runtime.name"_s, VersionProps::java_runtime_name);
	if (!$nc(VersionProps::VENDOR_VERSION)->isEmpty()) {
		props->put("java.vendor.version"_s, VersionProps::VENDOR_VERSION);
	}
	props->put("java.class.version"_s, VersionProps::CLASSFILE_MAJOR_MINOR);
	props->put("java.specification.version"_s, VersionProps::VERSION_SPECIFICATION);
	props->put("java.specification.name"_s, "Java Platform API Specification"_s);
	props->put("java.specification.vendor"_s, "Oracle Corporation"_s);
	props->put("java.vendor"_s, VersionProps::VENDOR);
	props->put("java.vendor.url"_s, VersionProps::VENDOR_URL);
	props->put("java.vendor.url.bug"_s, VersionProps::VENDOR_URL_BUG);
}

int32_t VersionProps::parseVersionNumber($String* version, int32_t prevIndex, int32_t index) {
	$init(VersionProps);
	$useLocalCurrentObjectStackCache();
	if (index - prevIndex > 1 && $Character::digit($nc(version)->charAt(prevIndex), 10) <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Leading zeros not supported ("_s, $($nc(version)->substring(prevIndex, index)), ")"_s}));
	}
	return $Integer::parseInt(version, prevIndex, index, 10);
}

$List* VersionProps::parseVersionNumbers($String* version) {
	$init(VersionProps);
	$useLocalCurrentObjectStackCache();
	int32_t size = 0;
	int32_t prevIndex = 0;
	do {
		prevIndex = $nc(version)->indexOf((int32_t)u'.', prevIndex) + 1;
		++size;
	} while (prevIndex > 0);
	$var($IntegerArray, verNumbers, $new($IntegerArray, size));
	int32_t n = 0;
	prevIndex = 0;
	int32_t index = $nc(version)->indexOf((int32_t)u'.');
	while (index > -1) {
		verNumbers->set(n, $($Integer::valueOf(parseVersionNumber(version, prevIndex, index))));
		prevIndex = index + 1;
		index = version->indexOf((int32_t)u'.', prevIndex);
		++n;
	}
	verNumbers->set(n, $($Integer::valueOf(parseVersionNumber(version, prevIndex, version->length()))));
	bool var$0 = $nc(verNumbers->get(0))->intValue() == 0;
	if (var$0 || $nc(verNumbers->get(n))->intValue() == 0) {
		$throwNew($IllegalArgumentException, $$str({"Leading/trailing zeros not allowed ("_s, $($Arrays::toString(verNumbers)), ")"_s}));
	}
	return $List::of(verNumbers);
}

$List* VersionProps::versionNumbers() {
	$init(VersionProps);
	return parseVersionNumbers(VersionProps::VERSION_NUMBER);
}

$Optional* VersionProps::pre() {
	$init(VersionProps);
	return optionalOf(VersionProps::VERSION_PRE);
}

$Optional* VersionProps::build() {
	$init(VersionProps);
	return $nc(VersionProps::VERSION_BUILD)->isEmpty() ? $Optional::empty() : $Optional::of($($Integer::valueOf($Integer::parseInt(VersionProps::VERSION_BUILD))));
}

$Optional* VersionProps::optional() {
	$init(VersionProps);
	return optionalOf(VersionProps::VERSION_OPT);
}

$Optional* VersionProps::optionalOf($String* value) {
	$init(VersionProps);
	if (!$nc(value)->isEmpty()) {
		return $Optional::of(value);
	} else {
		return $Optional::empty();
	}
}

void VersionProps::print(bool err) {
	$init(VersionProps);
	print(err, false);
}

void VersionProps::println(bool err) {
	$init(VersionProps);
	print(err, true);
}

void VersionProps::print(bool err, bool newln) {
	$init(VersionProps);
	$useLocalCurrentObjectStackCache();
	$var($PrintStream, ps, err ? $System::err : $System::out);
	if (err) {
		$nc(ps)->println($$str({VersionProps::launcher_name, " version \""_s, VersionProps::java_version, "\" "_s, VersionProps::java_version_date, (VersionProps::isLTS ? " LTS"_s : ""_s)}));
	} else {
		$nc(ps)->println($$str({VersionProps::launcher_name, " "_s, VersionProps::java_version, " "_s, VersionProps::java_version_date, (VersionProps::isLTS ? " LTS"_s : ""_s)}));
	}
	$var($String, jdk_debug_level, $System::getProperty("jdk.debug"_s, "release"_s));
	if ("release"_s->equals(jdk_debug_level)) {
		$assign(jdk_debug_level, ""_s);
	} else {
		$assign(jdk_debug_level, $str({jdk_debug_level, " "_s}));
	}
	$var($String, vendor_version, $nc(VersionProps::VENDOR_VERSION)->isEmpty() ? ""_s : $str({" "_s, VersionProps::VENDOR_VERSION}));
	$nc(ps)->println($$str({VersionProps::java_runtime_name, vendor_version, " ("_s, jdk_debug_level, "build "_s, VersionProps::java_runtime_version, ")"_s}));
	$var($String, java_vm_name, $System::getProperty("java.vm.name"_s));
	$var($String, java_vm_version, $System::getProperty("java.vm.version"_s));
	$var($String, java_vm_info, $System::getProperty("java.vm.info"_s));
	ps->println($$str({java_vm_name, vendor_version, " ("_s, jdk_debug_level, "build "_s, java_vm_version, ", "_s, java_vm_info, ")"_s}));
}

void clinit$VersionProps($Class* class$) {
	$assignStatic(VersionProps::launcher_name, "openjdk"_s);
	$assignStatic(VersionProps::java_version, "17-internal"_s);
	$assignStatic(VersionProps::java_version_date, "2021-09-14"_s);
	$assignStatic(VersionProps::java_runtime_name, "OpenJDK Runtime Environment"_s);
	$assignStatic(VersionProps::java_runtime_version, "17-internal+0-adhoc.yeaya.jdk-jdk-17-35"_s);
	$assignStatic(VersionProps::VERSION_NUMBER, "17"_s);
	$assignStatic(VersionProps::VERSION_SPECIFICATION, "17"_s);
	$assignStatic(VersionProps::VERSION_BUILD, "0"_s);
	$assignStatic(VersionProps::VERSION_PRE, "internal"_s);
	$assignStatic(VersionProps::VERSION_OPT, "adhoc.yeaya.jdk-jdk-17-35"_s);
	$assignStatic(VersionProps::CLASSFILE_MAJOR_MINOR, "61.0"_s);
	$assignStatic(VersionProps::VENDOR, "N/A"_s);
	$assignStatic(VersionProps::VENDOR_URL, "https://openjdk.java.net/"_s);
	VersionProps::isLTS = "adhoc.yeaya.jdk-jdk-17-35"_s->startsWith("LTS"_s);
	$assignStatic(VersionProps::VENDOR_VERSION, ""_s);
	$assignStatic(VersionProps::VENDOR_URL_BUG, "https://bugreport.java.com/bugreport/"_s);
	$assignStatic(VersionProps::VENDOR_URL_VM_BUG, "https://bugreport.java.com/bugreport/crash.jsp"_s);
}

VersionProps::VersionProps() {
}

$Class* VersionProps::load$($String* name, bool initialize) {
	$loadClass(VersionProps, name, initialize, &_VersionProps_ClassInfo_, clinit$VersionProps, allocate$VersionProps);
	return class$;
}

$Class* VersionProps::class$ = nullptr;

	} // lang
} // java