/*
 * Xg233ai custom instruction translation.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

static bool trans_xg233ai_dma(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_dma(tcg_env,
                           get_gpr(ctx, a->rd, EXT_NONE),
                           get_gpr(ctx, a->rs1, EXT_NONE),
                           get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_gemm(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_gemm(tcg_env,
                            get_gpr(ctx, a->rd, EXT_NONE),
                            get_gpr(ctx, a->rs1, EXT_NONE),
                            get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_sort(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_sort(tcg_env,
                            get_gpr(ctx, a->rd, EXT_NONE),
                            get_gpr(ctx, a->rs1, EXT_NONE),
                            get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_vadd(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_vadd(tcg_env,
                            get_gpr(ctx, a->rd, EXT_NONE),
                            get_gpr(ctx, a->rs1, EXT_NONE),
                            get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_crush(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_crush(tcg_env,
                             get_gpr(ctx, a->rd, EXT_NONE),
                             get_gpr(ctx, a->rs1, EXT_NONE),
                             get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_expand(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_expand(tcg_env,
                              get_gpr(ctx, a->rd, EXT_NONE),
                              get_gpr(ctx, a->rs1, EXT_NONE),
                              get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_vdot(DisasContext *ctx, arg_r *a)
{
    TCGv dest = dest_gpr(ctx, a->rd);

    gen_helper_xg233ai_vdot(dest, tcg_env,
                            get_gpr(ctx, a->rs1, EXT_NONE),
                            get_gpr(ctx, a->rs2, EXT_NONE));
    gen_set_gpr(ctx, a->rd, dest);
    return true;
}

static bool trans_xg233ai_vrelu(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_vrelu(tcg_env,
                             get_gpr(ctx, a->rd, EXT_NONE),
                             get_gpr(ctx, a->rs1, EXT_NONE),
                             get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_vscale(DisasContext *ctx, arg_r *a)
{
    gen_helper_xg233ai_vscale(tcg_env,
                              get_gpr(ctx, a->rd, EXT_NONE),
                              get_gpr(ctx, a->rs1, EXT_NONE),
                              get_gpr(ctx, a->rs2, EXT_NONE));
    return true;
}

static bool trans_xg233ai_vmax(DisasContext *ctx, arg_r *a)
{
    TCGv dest = dest_gpr(ctx, a->rd);

    gen_helper_xg233ai_vmax(dest, tcg_env,
                            get_gpr(ctx, a->rs1, EXT_NONE),
                            get_gpr(ctx, a->rs2, EXT_NONE));
    gen_set_gpr(ctx, a->rd, dest);
    return true;
}
