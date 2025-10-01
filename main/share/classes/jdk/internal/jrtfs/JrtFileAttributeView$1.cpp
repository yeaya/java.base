#include <jdk/internal/jrtfs/JrtFileAttributeView$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView$AttrID.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView.h>
#include <jcpp.h>

using $JrtFileAttributeView$AttrIDArray = $Array<::jdk::internal::jrtfs::JrtFileAttributeView$AttrID>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JrtFileAttributeView = ::jdk::internal::jrtfs::JrtFileAttributeView;
using $JrtFileAttributeView$AttrID = ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtFileAttributeView$1_FieldInfo_[] = {
	{"$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JrtFileAttributeView$1, $SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)},
	{}
};

$EnclosingMethodInfo _JrtFileAttributeView$1_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.JrtFileAttributeView",
	nullptr,
	nullptr
};

$InnerClassInfo _JrtFileAttributeView$1_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JrtFileAttributeView$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.jrtfs.JrtFileAttributeView$1",
	"java.lang.Object",
	nullptr,
	_JrtFileAttributeView$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JrtFileAttributeView$1_EnclosingMethodInfo_,
	_JrtFileAttributeView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileAttributeView"
};

$Object* allocate$JrtFileAttributeView$1($Class* clazz) {
	return $of($alloc(JrtFileAttributeView$1));
}

$ints* JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID = nullptr;

void clinit$JrtFileAttributeView$1($Class* class$) {
	$assignStatic(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID, $new($ints, $($JrtFileAttributeView$AttrID::values())->length));
	{
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::size->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::creationTime->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::lastAccessTime->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::lastModifiedTime->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::isDirectory->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::isRegularFile->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::isSymbolicLink->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::isOther->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::fileKey->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::compressedSize->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)->set($JrtFileAttributeView$AttrID::extension->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

JrtFileAttributeView$1::JrtFileAttributeView$1() {
}

$Class* JrtFileAttributeView$1::load$($String* name, bool initialize) {
	$loadClass(JrtFileAttributeView$1, name, initialize, &_JrtFileAttributeView$1_ClassInfo_, clinit$JrtFileAttributeView$1, allocate$JrtFileAttributeView$1);
	return class$;
}

$Class* JrtFileAttributeView$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk