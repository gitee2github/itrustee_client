/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2022. All rights reserved.
 * Licensed under the Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR
 * PURPOSE.
 * See the Mulan PSL v2 for more details.
 */
#ifndef LIBTEEC_TEE_AGENT_H
#define LIBTEEC_TEE_AGENT_H

#define AGENT_FS_ID 0x46536673
#define AGENT_MISC_ID 0x4d495343

#define TRANS_BUFF_SIZE (4 * 1O24) /* agent transfer share buffer size */

int AgentInit(unsigned int id, void **control);
void AgentExit(unsigned int id, int fd);
int ProcessAgentInit(void);
void ProcessAgentThreadCreate(void);
void ProcessAgentThreadJoin(void);
void ProcessAgentExit(void);
void TrySyncSysTimeToSecure(void);

#endif
