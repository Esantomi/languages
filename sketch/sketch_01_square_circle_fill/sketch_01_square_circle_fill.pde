// 사각형, 원, 색칠하기
// http://yoonbumtae.com/?p=500


void setup() {
 
  // 자동 정렬: Ctrl + T
  println("콘솔 창에 표시");
  size(300, 300);  // 창 크기 (가로, 세로)
  color c = color(105, 104, 155); 
  background(c);
}
 
void draw() {
  noStroke();              // 도형 주위에 획을 긋지 않는다.
  rect(50, 50, 100, 100);  // 사각형을 그린다 (x:가로위치, y:세로위치, w:너비, h:높이)
 
  ellipse(25, 25, 80, 80);  // w, h 기반의 원(ellipse)을 그린다. (x, y, w, h)
 
  color c = color(65);  // Grayscale 색상 입력. rgb(65, 65, 65)와 같다.
  fill(c);              // color 타입의 변수 'c' 를 채우기(fill) 색상으로 사용한다.
  ellipse(75, 75, 80, 80);
 
  // colorMode가 지정되지 않은 경우 스케일 0-255의 RGB 기본값이 사용된다.
  c = color(50, 55, 100);  // RGB 색상 입력
  fill(c);
  rect(100, 210, 45, 80);  // 사각형을 그린다.(x, y, w, h) 
  
  // 색상 모드로 0~1 단위의 HSB(Hue, Saturation, Brightness) 사용
  colorMode(HSB, 1);          // RGB 대신 HSB(색조, 채도, 휘도)
  c = color(0.5, 1, 192, 1);  // 0~1 사이 값을 받아야 하므로 192는 1로 취급된다.
  //alpha도 colorMode에서 설정한 max 값에 영향을 받음
  fill(c);
  rect(155, 210, 45, 80);  // Draw right rect
  
  // 이미지로 저장. line-000001.png, line-000002.png, etc.
  saveFrame("line-######.png");
}
