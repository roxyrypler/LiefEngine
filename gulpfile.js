var gulp = require('gulp');
var imagemin = require('gulp-imagemin');

gulp.task('imagemin', function() {
    var imgSrc = 'sources/assets/*.+(png|jpg|gif)',
    imgDst = 'build/assets';
    
    gulp.src(imgSrc)
    .pipe(changed(imgDst))
    .pipe(imagemin())
    .pipe(gulp.dest(imgDst));
 });

gulp.task('default', gulp.series('imagemin'));