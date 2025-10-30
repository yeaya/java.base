#include <java/security/PermissionCollection.h>

#include <java/io/Serializable.h>
#include <java/security/Permission.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef NONNULL

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace security {

$FieldInfo _PermissionCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PermissionCollection, serialVersionUID)},
	{"readOnly", "Z", nullptr, $PRIVATE | $VOLATILE, $field(PermissionCollection, readOnly)},
	{}
};

$MethodInfo _PermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PermissionCollection::*)()>(&PermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC | $ABSTRACT},
	{"elementsAsStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"setReadOnly", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PermissionCollection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.PermissionCollection",
	"java.lang.Object",
	"java.io.Serializable",
	_PermissionCollection_FieldInfo_,
	_PermissionCollection_MethodInfo_
};

$Object* allocate$PermissionCollection($Class* clazz) {
	return $of($alloc(PermissionCollection));
}

void PermissionCollection::init$() {
}

$Stream* PermissionCollection::elementsAsStream() {
	$useLocalCurrentObjectStackCache();
	int32_t characteristics = isReadOnly() ? $Spliterator::NONNULL | $Spliterator::IMMUTABLE : $Spliterator::NONNULL;
	return $StreamSupport::stream($($Spliterators::spliteratorUnknownSize($($nc($(elements()))->asIterator()), characteristics)), false);
}

void PermissionCollection::setReadOnly() {
	this->readOnly = true;
}

bool PermissionCollection::isReadOnly() {
	return this->readOnly;
}

$String* PermissionCollection::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enum_, elements());
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($$str({$($Serializable::toString()), " (\n"_s}));
	while ($nc(enum_)->hasMoreElements()) {
		try {
			sb->append(" "_s);
			sb->append($($nc(($cast($Permission, $(enum_->nextElement()))))->toString()));
			sb->append("\n"_s);
		} catch ($NoSuchElementException& e) {
		}
	}
	sb->append(")\n"_s);
	return sb->toString();
}

PermissionCollection::PermissionCollection() {
}

$Class* PermissionCollection::load$($String* name, bool initialize) {
	$loadClass(PermissionCollection, name, initialize, &_PermissionCollection_ClassInfo_, allocate$PermissionCollection);
	return class$;
}

$Class* PermissionCollection::class$ = nullptr;

	} // security
} // java