#include <sun/nio/fs/AbstractBasicFileAttributeView.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef LAST_MODIFIED_TIME_NAME
#undef IS_DIRECTORY_NAME
#undef IS_REGULAR_FILE_NAME
#undef LAST_ACCESS_TIME_NAME
#undef IS_SYMBOLIC_LINK_NAME
#undef CREATION_TIME_NAME
#undef FILE_KEY_NAME
#undef SIZE_NAME
#undef IS_OTHER_NAME

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AbstractBasicFileAttributeView$AttributesBuilder = ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder;
using $DynamicFileAttributeView = ::sun::nio::fs::DynamicFileAttributeView;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractBasicFileAttributeView_FieldInfo_[] = {
	{"SIZE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, SIZE_NAME)},
	{"CREATION_TIME_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, CREATION_TIME_NAME)},
	{"LAST_ACCESS_TIME_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, LAST_ACCESS_TIME_NAME)},
	{"LAST_MODIFIED_TIME_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, LAST_MODIFIED_TIME_NAME)},
	{"FILE_KEY_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, FILE_KEY_NAME)},
	{"IS_DIRECTORY_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, IS_DIRECTORY_NAME)},
	{"IS_REGULAR_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, IS_REGULAR_FILE_NAME)},
	{"IS_SYMBOLIC_LINK_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, IS_SYMBOLIC_LINK_NAME)},
	{"IS_OTHER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, IS_OTHER_NAME)},
	{"basicAttributeNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(AbstractBasicFileAttributeView, basicAttributeNames)},
	{}
};

$MethodInfo _AbstractBasicFileAttributeView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractBasicFileAttributeView::*)()>(&AbstractBasicFileAttributeView::init$))},
	{"addRequestedBasicAttributes", "(Ljava/nio/file/attribute/BasicFileAttributes;Lsun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder;)V", nullptr, $FINAL, $method(static_cast<void(AbstractBasicFileAttributeView::*)($BasicFileAttributes*,$AbstractBasicFileAttributeView$AttributesBuilder*)>(&AbstractBasicFileAttributeView::addRequestedBasicAttributes))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractBasicFileAttributeView_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractBasicFileAttributeView$AttributesBuilder", "sun.nio.fs.AbstractBasicFileAttributeView", "AttributesBuilder", $STATIC},
	{}
};

$ClassInfo _AbstractBasicFileAttributeView_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.fs.AbstractBasicFileAttributeView",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributeView,sun.nio.fs.DynamicFileAttributeView",
	_AbstractBasicFileAttributeView_FieldInfo_,
	_AbstractBasicFileAttributeView_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractBasicFileAttributeView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractBasicFileAttributeView$AttributesBuilder"
};

$Object* allocate$AbstractBasicFileAttributeView($Class* clazz) {
	return $of($alloc(AbstractBasicFileAttributeView));
}

int32_t AbstractBasicFileAttributeView::hashCode() {
	 return this->$BasicFileAttributeView::hashCode();
}

bool AbstractBasicFileAttributeView::equals(Object$* obj) {
	 return this->$BasicFileAttributeView::equals(obj);
}

$Object* AbstractBasicFileAttributeView::clone() {
	 return this->$BasicFileAttributeView::clone();
}

$String* AbstractBasicFileAttributeView::toString() {
	 return this->$BasicFileAttributeView::toString();
}

void AbstractBasicFileAttributeView::finalize() {
	this->$BasicFileAttributeView::finalize();
}

$String* AbstractBasicFileAttributeView::SIZE_NAME = nullptr;
$String* AbstractBasicFileAttributeView::CREATION_TIME_NAME = nullptr;
$String* AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME = nullptr;
$String* AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME = nullptr;
$String* AbstractBasicFileAttributeView::FILE_KEY_NAME = nullptr;
$String* AbstractBasicFileAttributeView::IS_DIRECTORY_NAME = nullptr;
$String* AbstractBasicFileAttributeView::IS_REGULAR_FILE_NAME = nullptr;
$String* AbstractBasicFileAttributeView::IS_SYMBOLIC_LINK_NAME = nullptr;
$String* AbstractBasicFileAttributeView::IS_OTHER_NAME = nullptr;
$Set* AbstractBasicFileAttributeView::basicAttributeNames = nullptr;

void AbstractBasicFileAttributeView::init$() {
}

$String* AbstractBasicFileAttributeView::name() {
	return "basic"_s;
}

void AbstractBasicFileAttributeView::setAttribute($String* attribute, Object$* value) {
	if ($nc(attribute)->equals(AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME)) {
		setTimes($cast($FileTime, value), nullptr, nullptr);
		return;
	}
	if ($nc(attribute)->equals(AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME)) {
		setTimes(nullptr, $cast($FileTime, value), nullptr);
		return;
	}
	if ($nc(attribute)->equals(AbstractBasicFileAttributeView::CREATION_TIME_NAME)) {
		setTimes(nullptr, nullptr, $cast($FileTime, value));
		return;
	}
	$throwNew($IllegalArgumentException, $$str({"\'"_s, $(name()), ":"_s, attribute, "\' not recognized"_s}));
}

void AbstractBasicFileAttributeView::addRequestedBasicAttributes($BasicFileAttributes* attrs, $AbstractBasicFileAttributeView$AttributesBuilder* builder) {
	if ($nc(builder)->match(AbstractBasicFileAttributeView::SIZE_NAME)) {
		builder->add(AbstractBasicFileAttributeView::SIZE_NAME, $($Long::valueOf($nc(attrs)->size())));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::CREATION_TIME_NAME)) {
		builder->add(AbstractBasicFileAttributeView::CREATION_TIME_NAME, $($nc(attrs)->creationTime()));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME)) {
		builder->add(AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME, $($nc(attrs)->lastAccessTime()));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME)) {
		builder->add(AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME, $($nc(attrs)->lastModifiedTime()));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::FILE_KEY_NAME)) {
		builder->add(AbstractBasicFileAttributeView::FILE_KEY_NAME, $($nc(attrs)->fileKey()));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::IS_DIRECTORY_NAME)) {
		builder->add(AbstractBasicFileAttributeView::IS_DIRECTORY_NAME, $($Boolean::valueOf($nc(attrs)->isDirectory())));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::IS_REGULAR_FILE_NAME)) {
		builder->add(AbstractBasicFileAttributeView::IS_REGULAR_FILE_NAME, $($Boolean::valueOf($nc(attrs)->isRegularFile())));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::IS_SYMBOLIC_LINK_NAME)) {
		builder->add(AbstractBasicFileAttributeView::IS_SYMBOLIC_LINK_NAME, $($Boolean::valueOf($nc(attrs)->isSymbolicLink())));
	}
	if ($nc(builder)->match(AbstractBasicFileAttributeView::IS_OTHER_NAME)) {
		builder->add(AbstractBasicFileAttributeView::IS_OTHER_NAME, $($Boolean::valueOf($nc(attrs)->isOther())));
	}
}

$Map* AbstractBasicFileAttributeView::readAttributes($StringArray* requested) {
	$var($AbstractBasicFileAttributeView$AttributesBuilder, builder, $AbstractBasicFileAttributeView$AttributesBuilder::create(AbstractBasicFileAttributeView::basicAttributeNames, requested));
	addRequestedBasicAttributes($(readAttributes()), builder);
	return $nc(builder)->unmodifiableMap();
}

void clinit$AbstractBasicFileAttributeView($Class* class$) {
	$assignStatic(AbstractBasicFileAttributeView::SIZE_NAME, "size"_s);
	$assignStatic(AbstractBasicFileAttributeView::CREATION_TIME_NAME, "creationTime"_s);
	$assignStatic(AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME, "lastAccessTime"_s);
	$assignStatic(AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME, "lastModifiedTime"_s);
	$assignStatic(AbstractBasicFileAttributeView::FILE_KEY_NAME, "fileKey"_s);
	$assignStatic(AbstractBasicFileAttributeView::IS_DIRECTORY_NAME, "isDirectory"_s);
	$assignStatic(AbstractBasicFileAttributeView::IS_REGULAR_FILE_NAME, "isRegularFile"_s);
	$assignStatic(AbstractBasicFileAttributeView::IS_SYMBOLIC_LINK_NAME, "isSymbolicLink"_s);
	$assignStatic(AbstractBasicFileAttributeView::IS_OTHER_NAME, "isOther"_s);
	$assignStatic(AbstractBasicFileAttributeView::basicAttributeNames, $Util::newSet($$new($StringArray, {
		AbstractBasicFileAttributeView::SIZE_NAME,
		AbstractBasicFileAttributeView::CREATION_TIME_NAME,
		AbstractBasicFileAttributeView::LAST_ACCESS_TIME_NAME,
		AbstractBasicFileAttributeView::LAST_MODIFIED_TIME_NAME,
		AbstractBasicFileAttributeView::FILE_KEY_NAME,
		AbstractBasicFileAttributeView::IS_DIRECTORY_NAME,
		AbstractBasicFileAttributeView::IS_REGULAR_FILE_NAME,
		AbstractBasicFileAttributeView::IS_SYMBOLIC_LINK_NAME,
		AbstractBasicFileAttributeView::IS_OTHER_NAME
	})));
}

AbstractBasicFileAttributeView::AbstractBasicFileAttributeView() {
}

$Class* AbstractBasicFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(AbstractBasicFileAttributeView, name, initialize, &_AbstractBasicFileAttributeView_ClassInfo_, clinit$AbstractBasicFileAttributeView, allocate$AbstractBasicFileAttributeView);
	return class$;
}

$Class* AbstractBasicFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun