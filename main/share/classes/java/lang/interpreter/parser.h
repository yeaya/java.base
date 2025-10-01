/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _java_lang_integerpreter_parser_h_
#define _java_lang_integerpreter_parser_h_

#include <java/lang/String.h>
#include <algorithm>

class DescriptorPart {
public:
    size_t array_dimensions = 0; // how many [
    uint8_t category = 0; // void=0, category 1, category 2
    bool is_return = false;
};

class MethodDescriptorParts : std::iterator<std::forward_iterator_tag, DescriptorPart> {
public:
	explicit MethodDescriptorParts(::java::lang::String* ptr);

    DescriptorPart* operator->() { return &descriptorPart; }
    MethodDescriptorParts& operator++();

    bool end() {
        return readedSize + offset >= ptr->length();
    }
    char16_t charAt(int32_t index) {
        return ptr->charAt(readedSize + index);
    }
private:
    ::java::lang::String* ptr = nullptr;
    int32_t readedSize = 0;
    size_t offset = 0;
    DescriptorPart descriptorPart;

    void token();
};

#endif // _java_lang_integerpreter_parser_h_