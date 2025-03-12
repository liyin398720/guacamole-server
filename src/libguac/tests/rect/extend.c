/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <CUnit/CUnit.h>
#include <guacamole/rect.h>

/**
 * Test which verifies that guac_rect_extend() expands the given rectangle as
 * necessary to contain at least the given bounds.
 */
void test_rect__extend() {

    guac_rect max;
    guac_rect rect;

    guac_rect_init(&rect, 10, 10, 90, 90);
    guac_rect_init(&max, 0, 0, 100, 100);
    guac_rect_extend(&rect, &max);
    CU_ASSERT_EQUAL(0, rect.left);
    CU_ASSERT_EQUAL(0, rect.top);
    CU_ASSERT_EQUAL(100, rect.right);
    CU_ASSERT_EQUAL(100, rect.bottom);

}

