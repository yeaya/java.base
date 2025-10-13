#include <sun/nio/fs/ExtendedOptions.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <jcpp.h>

#undef DIRECT
#undef FILE_TREE
#undef INTERRUPTIBLE
#undef NOSHARE_DELETE
#undef NOSHARE_READ
#undef NOSHARE_WRITE
#undef SENSITIVITY_HIGH
#undef SENSITIVITY_LOW
#undef SENSITIVITY_MEDIUM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _ExtendedOptions_FieldInfo_[] = {
	{"internalToExternal", "Ljava/util/Map;", "Ljava/util/Map<Lsun/nio/fs/ExtendedOptions$InternalOption<*>;Lsun/nio/fs/ExtendedOptions$Wrapper<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedOptions, internalToExternal)},
	{"INTERRUPTIBLE", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, INTERRUPTIBLE)},
	{"NOSHARE_READ", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, NOSHARE_READ)},
	{"NOSHARE_WRITE", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, NOSHARE_WRITE)},
	{"NOSHARE_DELETE", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, NOSHARE_DELETE)},
	{"FILE_TREE", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, FILE_TREE)},
	{"DIRECT", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, DIRECT)},
	{"SENSITIVITY_HIGH", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, SENSITIVITY_HIGH)},
	{"SENSITIVITY_MEDIUM", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, SENSITIVITY_MEDIUM)},
	{"SENSITIVITY_LOW", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedOptions, SENSITIVITY_LOW)},
	{}
};

$MethodInfo _ExtendedOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedOptions::*)()>(&ExtendedOptions::init$))},
	{}
};

$InnerClassInfo _ExtendedOptions_InnerClassesInfo_[] = {
	{"sun.nio.fs.ExtendedOptions$InternalOption", "sun.nio.fs.ExtendedOptions", "InternalOption", $PUBLIC | $STATIC | $FINAL},
	{"sun.nio.fs.ExtendedOptions$Wrapper", "sun.nio.fs.ExtendedOptions", "Wrapper", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedOptions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.fs.ExtendedOptions",
	"java.lang.Object",
	nullptr,
	_ExtendedOptions_FieldInfo_,
	_ExtendedOptions_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.ExtendedOptions$InternalOption,sun.nio.fs.ExtendedOptions$Wrapper"
};

$Object* allocate$ExtendedOptions($Class* clazz) {
	return $of($alloc(ExtendedOptions));
}

$Map* ExtendedOptions::internalToExternal = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::INTERRUPTIBLE = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::NOSHARE_READ = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::NOSHARE_WRITE = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::NOSHARE_DELETE = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::FILE_TREE = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::DIRECT = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::SENSITIVITY_HIGH = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::SENSITIVITY_MEDIUM = nullptr;
$ExtendedOptions$InternalOption* ExtendedOptions::SENSITIVITY_LOW = nullptr;

void ExtendedOptions::init$() {
}

void clinit$ExtendedOptions($Class* class$) {
	$assignStatic(ExtendedOptions::internalToExternal, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$assignStatic(ExtendedOptions::INTERRUPTIBLE, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::NOSHARE_READ, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::NOSHARE_WRITE, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::NOSHARE_DELETE, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::FILE_TREE, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::DIRECT, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::SENSITIVITY_HIGH, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::SENSITIVITY_MEDIUM, $new($ExtendedOptions$InternalOption));
	$assignStatic(ExtendedOptions::SENSITIVITY_LOW, $new($ExtendedOptions$InternalOption));
}

ExtendedOptions::ExtendedOptions() {
}

$Class* ExtendedOptions::load$($String* name, bool initialize) {
	$loadClass(ExtendedOptions, name, initialize, &_ExtendedOptions_ClassInfo_, clinit$ExtendedOptions, allocate$ExtendedOptions);
	return class$;
}

$Class* ExtendedOptions::class$ = nullptr;

		} // fs
	} // nio
} // sun