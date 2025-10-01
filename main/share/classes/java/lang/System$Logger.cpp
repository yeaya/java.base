#include <java/lang/System$Logger.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace lang {

$MethodInfo _System$Logger_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)V", $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$InnerClassInfo _System$Logger_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.System$Logger$Level", "java.lang.System$Logger", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _System$Logger_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.System$Logger",
	nullptr,
	nullptr,
	nullptr,
	_System$Logger_MethodInfo_,
	nullptr,
	nullptr,
	_System$Logger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.System"
};

$Object* allocate$System$Logger($Class* clazz) {
	return $of($alloc(System$Logger));
}

void System$Logger::log($System$Logger$Level* level, $String* msg) {
	log(level, ($ResourceBundle*)nullptr, msg, ($ObjectArray*)nullptr);
}

void System$Logger::log($System$Logger$Level* level, $Supplier* msgSupplier) {
	$Objects::requireNonNull(msgSupplier);
	if (isLoggable($cast($System$Logger$Level, $Objects::requireNonNull(level)))) {
		log(level, ($ResourceBundle*)nullptr, $cast($String, $(msgSupplier->get())), ($ObjectArray*)nullptr);
	}
}

void System$Logger::log($System$Logger$Level* level, Object$* obj) {
	$Objects::requireNonNull(obj);
	if (isLoggable($cast($System$Logger$Level, $Objects::requireNonNull(level)))) {
		this->log(level, ($ResourceBundle*)nullptr, $($of(obj)->toString()), ($ObjectArray*)nullptr);
	}
}

void System$Logger::log($System$Logger$Level* level, $String* msg, $Throwable* thrown) {
	this->log(level, ($ResourceBundle*)nullptr, msg, thrown);
}

void System$Logger::log($System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$Objects::requireNonNull(msgSupplier);
	if (isLoggable($cast($System$Logger$Level, $Objects::requireNonNull(level)))) {
		this->log(level, ($ResourceBundle*)nullptr, $cast($String, $(msgSupplier->get())), thrown);
	}
}

void System$Logger::log($System$Logger$Level* level, $String* format, $ObjectArray* params) {
	this->log(level, ($ResourceBundle*)nullptr, format, params);
}

$Class* System$Logger::load$($String* name, bool initialize) {
	$loadClass(System$Logger, name, initialize, &_System$Logger_ClassInfo_, allocate$System$Logger);
	return class$;
}

$Class* System$Logger::class$ = nullptr;

	} // lang
} // java