#include <javax/net/ssl/KeyStoreBuilderParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore$Builder.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore$Builder = ::java::security::KeyStore$Builder;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _KeyStoreBuilderParameters_FieldInfo_[] = {
	{"parameters", "Ljava/util/List;", "Ljava/util/List<Ljava/security/KeyStore$Builder;>;", $PRIVATE | $FINAL, $field(KeyStoreBuilderParameters, parameters)},
	{}
};

$MethodInfo _KeyStoreBuilderParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreBuilderParameters::*)($KeyStore$Builder*)>(&KeyStoreBuilderParameters::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/KeyStore$Builder;>;)V", $PUBLIC, $method(static_cast<void(KeyStoreBuilderParameters::*)($List*)>(&KeyStoreBuilderParameters::init$))},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/KeyStore$Builder;>;", $PUBLIC},
	{}
};

$ClassInfo _KeyStoreBuilderParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.KeyStoreBuilderParameters",
	"java.lang.Object",
	"javax.net.ssl.ManagerFactoryParameters",
	_KeyStoreBuilderParameters_FieldInfo_,
	_KeyStoreBuilderParameters_MethodInfo_
};

$Object* allocate$KeyStoreBuilderParameters($Class* clazz) {
	return $of($alloc(KeyStoreBuilderParameters));
}

void KeyStoreBuilderParameters::init$($KeyStore$Builder* builder) {
	$set(this, parameters, $Collections::singletonList($cast($KeyStore$Builder, $Objects::requireNonNull(builder))));
}

void KeyStoreBuilderParameters::init$($List* parameters) {
	if ($nc(parameters)->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, parameters, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(parameters))));
}

$List* KeyStoreBuilderParameters::getParameters() {
	return this->parameters;
}

KeyStoreBuilderParameters::KeyStoreBuilderParameters() {
}

$Class* KeyStoreBuilderParameters::load$($String* name, bool initialize) {
	$loadClass(KeyStoreBuilderParameters, name, initialize, &_KeyStoreBuilderParameters_ClassInfo_, allocate$KeyStoreBuilderParameters);
	return class$;
}

$Class* KeyStoreBuilderParameters::class$ = nullptr;

		} // ssl
	} // net
} // javax